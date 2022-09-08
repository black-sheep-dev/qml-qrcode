#ifndef QRCODEIMAGEPROVIDER_H
#define QRCODEIMAGEPROVIDER_H

#include <QQuickImageProvider>

class QrCodeImageProvider : public QQuickImageProvider
{
public:
    QrCodeImageProvider();

    // QQuickImageProvider interface
public:
    QPixmap requestPixmap(const QString &id, QSize *size, const QSize &requestedSize) override;
};

#endif // QRCODEIMAGEPROVIDER_H
