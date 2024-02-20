/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 7.0.10

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>

using namespace std;
#define MaxColours  140

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ColourPicker  : public Component,
                      public Button::Listener
{
public:
    //==============================================================================
    ColourPicker ();
    ~ColourPicker() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
private:
    void NewTextButton(std::unique_ptr<TextButton>& up, Colour On, bool Sticky = false);
    void HandleButton(Colour);
    void buttonClicked(Button* buttonThatWasClicked) override;
    void SaveSize(int Width, int Height);
    void LoadSize(int& x, int& y);
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    Colour                      filler;
    String                      ColourName;
    String                      ColourHex;
    std::unique_ptr<TextButton> bnColor[140];
    std::unique_ptr<Label>      lbColourName;
    std::unique_ptr<Label>      lbColourHex;
    std::unique_ptr<Label>      lbColourDisplay;
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ColourPicker)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

