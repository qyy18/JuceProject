/*
  ==============================================================================

    MyComp1.h
    Created: 19 Oct 2021 2:41:04am
    Author:  乔

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class MyComp1  : public juce::Component
{
public:
    MyComp1();
    ~MyComp1() override;

    void paint (juce::Graphics&) override;
    void resized() override;
    //void mouseDoubleClick(<#const MouseEvent &event#>) override;

private:
    juce::String name;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MyComp1)
};
