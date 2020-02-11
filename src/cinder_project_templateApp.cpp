#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class cinder_project_templateApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void cinder_project_templateApp::setup()
{
}

void cinder_project_templateApp::mouseDown( MouseEvent event )
{
}

void cinder_project_templateApp::update()
{
}

void cinder_project_templateApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) );
}

CINDER_APP( cinder_project_templateApp, RendererGl )
