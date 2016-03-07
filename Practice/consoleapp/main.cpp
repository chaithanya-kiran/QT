#include <QtCore/QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "hello ck" << endl ;
    int m,n;
    cin >> m >> n;
    cout << m << " " << n << endl;
    return a.exec();
}
