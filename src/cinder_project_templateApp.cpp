#include <cinder/app/cocoa/AppMac.h>
#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "test.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class cinder_project_template : public App {
public:
    void setup() override;

    void mouseDown(MouseEvent event) override;

    void update() override;

    void draw() override;

    void keyDown(KeyEvent event) override;
};

void cinder_project_template::setup() {
}

void cinder_project_template::mouseDown(MouseEvent event) {

}

void cinder_project_template::update() {
}

void cinder_project_template::draw() {
    gl::clear(Color(1, 0, 0));
    test();
}

void cinder_project_template::keyDown(KeyEvent event) {
    if(event.getCode() == 27) App::quit();
}

CINDER_APP(cinder_project_template, RendererGl, [](App::Settings *settings) {
    settings->setAlwaysOnTop(true);
    settings->setHighDensityDisplayEnabled(true);
});
