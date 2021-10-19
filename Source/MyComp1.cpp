/*
  ==============================================================================

    MyComp1.cpp
    Created: 19 Oct 2021 2:41:04am
    Author:  乔

  ==============================================================================
*/

#include <JuceHeader.h>
#include "MyComp1.h"

//==============================================================================
MyComp1::MyComp1()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    setSize(400,300);
    this->name="MyComp1";
}

MyComp1::~MyComp1()
{
}

void MyComp1::paint (juce::Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (juce::Colours::lightblue);   // clear the background

    g.setColour (juce::Colours::grey);
    //g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    //g.setColour (juce::Colours::white);
    g.setFont (20.0f);
    g.drawText (name, getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void MyComp1::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
 void MyComp1::mouseDoubleClick(<#const MouseEvent &event#>)
{
     name="hhh";
 }
