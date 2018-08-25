/*
 Copyright (C) 2018 Luis Fernando García [http://luiscript.com]
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

#ifndef ofxDarkKnightAbletonLink_hpp
#define ofxDarkKnightAbletonLink_hpp

#include "module.hpp"
#include "ofxAbletonLink.h"

class ofxDarkKnightAbletonLink : public Module{
private:
    ofxAbletonLink link;
    float link14;
    float link24;
    float link44;
    float link84;
    float link164;
    float link324;
    
    double time14;
    double time24;
    double time84;
    double time164;
    double time324;
    
    float beat0;
public:
    ofxDarkKnightAbletonLink();
    void setup();
    void update();
    void draw();
    void addModuleParameters();
    void unMount();
    
    void setModuleEnabled(bool);
};

#endif /* ofxDarkKnightAbletonLink_hpp */