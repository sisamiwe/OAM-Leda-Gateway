#include "OpenKNX.h"
#include "Logic.h"
#include "CANGatewayModule.h"
#include "VirtualButtonModule.h"
#include "FileTransferModule.h"


bool setup_done = false;

CANGateway myCANGateway;

void setup()
{
    const uint8_t firmwareRevision = 1;
    openknx.init(firmwareRevision);
    openknx.addModule(2, myCANGateway);
    openknx.addModule(3, openknxVirtualButtonModule);
    openknx.addModule(1, openknxLogic);
    openknx.addModule(9, openknxFileTransferModule);
    openknx.setup();
    setup_done = true;
}

void loop()
{
    openknx.loop();
}

void loop1()
{
    while(!setup_done)
        delay(100);
    while(true)
    {
        myCANGateway.loop1();
    }
}