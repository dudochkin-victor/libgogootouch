
#include <QDebug>

#include "chainingexampleinterface.h"

#include "imageviewer.h"

ImageViewer::ImageViewer( const MButton &button ) :
    chainingExampleInterface( new ChainingExampleInterface )
{
    QObject::connect( &button, SIGNAL( released() ), this, SLOT( showImage() ) );
}

ImageViewer::~ImageViewer()
{
    delete chainingExampleInterface;
}

void ImageViewer::showImage()
{
    QString imageFilename( "chained view from app 1" );
    QStringList list;
    list << imageFilename;

    if ( chainingExampleInterface->isValid() ) {
        chainingExampleInterface->showImage( imageFilename, list, "title from app1" );
    } else {
        qDebug() << "chainingExampleInterface not valid : " << chainingExampleInterface;
    }
}
