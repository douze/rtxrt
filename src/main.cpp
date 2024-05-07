#include <Magnum/GL/DefaultFramebuffer.h>
#include <Magnum/Platform/Sdl2Application.h>

using namespace Magnum;

class RTxRT: public Platform::Application {
    public:
        explicit RTxRT(const Arguments& arguments);

    private:
        void drawEvent() override;
};

RTxRT::RTxRT(const Arguments& arguments): Platform::Application{arguments} {
    /* TODO: Add your initialization code here */
}

void RTxRT::drawEvent() {
    GL::defaultFramebuffer.clear(GL::FramebufferClear::Color);

    /* TODO: Add your drawing code here */

    swapBuffers();
}

MAGNUM_APPLICATION_MAIN(RTxRT)
