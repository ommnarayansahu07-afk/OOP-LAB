#include <iostream>
using namespace std;

class WiFi
{
public:
    void connect()
    {
        cout << "Connecting through WiFi." << endl;
    }
};

class Bluetooth
{
public:
    void connect()
    {
        cout << "Connecting through Bluetooth." << endl;
    }
};

class SmartHub : public WiFi, public Bluetooth
{
public:
    void controlDevice()
    {
        cout << "Smart home device is controlled." << endl;
    }
};

int main()
{
    SmartHub s;

    s.WiFi::connect();
    s.Bluetooth::connect();

    s.controlDevice();

    return 0;
}
