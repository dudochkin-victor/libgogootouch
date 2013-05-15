/***************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (directui@nokia.com)
**
** This file is part of libmeegotouch.
**
** If you have questions regarding the use of this file, please contact
** Nokia at directui@nokia.com.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation
** and appearing in the file LICENSE.LGPL included in the packaging
** of this file.
**
****************************************************************************/

#include <MApplication>
#include <MApplicationWindow>
#include <MApplicationPage>

#include "mainpage.h"

int main(int argc, char **argv)
{
    MApplication app(argc, argv);
    MApplication::setPrestartMode(M::LazyShutdown);

    MApplicationWindow window;
    window.show();

    MainPage mainPage;
    mainPage.appear(&window);

    // Run activateWidgets() here to setup things if app is NOT prestarted now
    if (!app.isPrestarted()) {
        mainPage.activateWidgets();
    }
    
    // Connect to prestart signals
    app.connect(&app, SIGNAL(prestartReleased()), &mainPage, SLOT(activateWidgets()));
    app.connect(&app, SIGNAL(prestartRestored()), &mainPage, SLOT(deactivateWidgets()));

    return app.exec();
}

