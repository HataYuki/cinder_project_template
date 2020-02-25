//
// Created by hata yuki on 2020/02/26.
//

#include "cinder/app/App.h"
#include "cinder/gl/gl.h"
#include "test.h"

void test(){
    ci::gl::drawSolidCircle(ci::app::getWindowCenter(),100.0f);
}