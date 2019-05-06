#include <QCoreApplication>
#include <QSslSocket>

int main(int argc, char *argv[])
{
    Q_UNUSED(argc);
    Q_UNUSED(argv);

    if(QSslSocket::supportsSsl())
        qDebug() << "SSL support is working.";
    else
        qDebug() << "SSL support is NOT working !";

    qDebug() << "Qt is build against the SSL version: " << QSslSocket::sslLibraryBuildVersionString();
    qDebug() << "The Qt runtime use  the SSL version: " << QSslSocket::sslLibraryVersionString();
}
