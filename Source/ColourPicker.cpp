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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "ColourPicker.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
#define     INI_FILENAME    "LUCE_ColourPicker.ini"
juce::Colour MyColours[] = {
    juce::Colours::aliceblue,
    juce::Colours::antiquewhite,
    juce::Colours::aqua,
    juce::Colours::aliceblue,
    juce::Colours::antiquewhite,
    juce::Colours::aqua,
    juce::Colours::aquamarine,
    juce::Colours::azure,
    juce::Colours::beige,
    juce::Colours::bisque,
    juce::Colours::black,
    juce::Colours::blanchedalmond,
    juce::Colours::blue,
    juce::Colours::blueviolet,
    juce::Colours::brown,
    juce::Colours::burlywood,
    juce::Colours::cadetblue,
    juce::Colours::chartreuse,
    juce::Colours::chocolate,
    juce::Colours::coral,
    juce::Colours::cornflowerblue,
    juce::Colours::cornsilk,
    juce::Colours::crimson,
    juce::Colours::cyan,
    juce::Colours::darkblue,
    juce::Colours::darkcyan,
    juce::Colours::darkgoldenrod,
    juce::Colours::darkgrey,
    juce::Colours::darkgreen,
    juce::Colours::darkkhaki,
    juce::Colours::darkmagenta,
    juce::Colours::darkolivegreen,
    juce::Colours::darkorange,
    juce::Colours::darkorchid,
    juce::Colours::darkred,
    juce::Colours::darksalmon,
    juce::Colours::darkseagreen,
    juce::Colours::darkslateblue,
    juce::Colours::darkslategrey,
    juce::Colours::darkturquoise,
    juce::Colours::darkviolet,
    juce::Colours::deeppink,
    juce::Colours::deepskyblue,
    juce::Colours::dimgrey,
    juce::Colours::dodgerblue,
    juce::Colours::firebrick,
    juce::Colours::floralwhite,
    juce::Colours::forestgreen,
    juce::Colours::fuchsia,
    juce::Colours::gainsboro,
    juce::Colours::ghostwhite,
    juce::Colours::gold,
    juce::Colours::goldenrod,
    juce::Colours::grey,
    juce::Colours::green,
    juce::Colours::greenyellow,
    juce::Colours::honeydew,
    juce::Colours::hotpink,
    juce::Colours::indianred,
    juce::Colours::indigo,
    juce::Colours::ivory,
    juce::Colours::khaki,
    juce::Colours::lavender,
    juce::Colours::lavenderblush,
    juce::Colours::lawngreen,
    juce::Colours::lemonchiffon,
    juce::Colours::lightblue,
    juce::Colours::lightcoral,
    juce::Colours::lightcyan,
    juce::Colours::lightgoldenrodyellow,
    juce::Colours::lightgreen,
    juce::Colours::lightgrey,
    juce::Colours::lightpink,
    juce::Colours::lightsalmon,
    juce::Colours::lightseagreen,
    juce::Colours::lightskyblue,
    juce::Colours::lightslategrey,
    juce::Colours::lightsteelblue,
    juce::Colours::lightyellow,
    juce::Colours::lime,
    juce::Colours::limegreen,
    juce::Colours::linen,
    juce::Colours::magenta,
    juce::Colours::maroon,
    juce::Colours::mediumaquamarine,
    juce::Colours::mediumblue,
    juce::Colours::mediumorchid,
    juce::Colours::mediumpurple,
    juce::Colours::mediumseagreen,
    juce::Colours::mediumslateblue,
    juce::Colours::mediumspringgreen,
    juce::Colours::mediumturquoise,
    juce::Colours::mediumvioletred,
    juce::Colours::midnightblue,
    juce::Colours::mintcream,
    juce::Colours::mistyrose,
    juce::Colours::moccasin,
    juce::Colours::navajowhite,
    juce::Colours::navy,
    juce::Colours::oldlace,
    juce::Colours::olive,
    juce::Colours::olivedrab,
    juce::Colours::orange,
    juce::Colours::orangered,
    juce::Colours::orchid,
    juce::Colours::palegoldenrod,
    juce::Colours::palegreen,
    juce::Colours::paleturquoise,
    juce::Colours::palevioletred,
    juce::Colours::papayawhip,
    juce::Colours::peachpuff,
    juce::Colours::peru,
    juce::Colours::pink,
    juce::Colours::plum,
    juce::Colours::powderblue,
    juce::Colours::purple,
    juce::Colours::rebeccapurple,
    juce::Colours::red,
    juce::Colours::rosybrown,
    juce::Colours::royalblue,
    juce::Colours::saddlebrown,
    juce::Colours::salmon,
    juce::Colours::sandybrown,
    juce::Colours::seagreen,
    juce::Colours::seashell,
    juce::Colours::sienna,
    juce::Colours::silver,
    juce::Colours::skyblue,
    juce::Colours::slateblue,
    juce::Colours::slategrey,
    juce::Colours::snow,
    juce::Colours::springgreen,
    juce::Colours::steelblue,
    juce::Colours::tan,
    juce::Colours::teal,
    juce::Colours::thistle,
    juce::Colours::tomato,
    juce::Colours::turquoise,
    juce::Colours::violet,
    juce::Colours::wheat,
    juce::Colours::white,
    juce::Colours::whitesmoke,
    juce::Colours::yellow,
    juce::Colours::yellowgreen
};
juce::String MyColourNamess[] = {
    "aliceblue",
    "antiquewhite",
    "aqua",
    "aliceblue",
    "antiquewhite",
    "aqua",
    "aquamarine",
    "azure",
    "beige",
    "bisque",
    "black",
    "blanchedalmond",
    "blue",
    "blueviolet",
    "brown",
    "burlywood",
    "cadetblue",
    "chartreuse",
    "chocolate",
    "coral",
    "cornflowerblue",
    "cornsilk",
    "crimson",
    "cyan",
    "darkblue",
    "darkcyan",
    "darkgoldenrod",
    "darkgrey",
    "darkgreen",
    "darkkhaki",
    "darkmagenta",
    "darkolivegreen",
    "darkorange",
    "darkorchid",
    "darkred",
    "darksalmon",
    "darkseagreen",
    "darkslateblue",
    "darkslategrey",
    "darkturquoise",
    "darkviolet",
    "deeppink",
    "deepskyblue",
    "dimgrey",
    "dodgerblue",
    "firebrick",
    "floralwhite",
    "forestgreen",
    "fuchsia",
    "gainsboro",
    "ghostwhite",
    "gold",
    "goldenrod",
    "grey",
    "green",
    "greenyellow",
    "honeydew",
    "hotpink",
    "indianred",
    "indigo",
    "ivory",
    "khaki",
    "lavender",
    "lavenderblush",
    "lawngreen",
    "lemonchiffon",
    "lightblue",
    "lightcoral",
    "lightcyan",
    "lightgoldenrodyellow",
    "lightgreen",
    "lightgrey",
    "lightpink",
    "lightsalmon",
    "lightseagreen",
    "lightskyblue",
    "lightslategrey",
    "lightsteelblue",
    "lightyellow",
    "lime",
    "limegreen",
    "linen",
    "magenta",
    "maroon",
    "mediumaquamarine",
    "mediumblue",
    "mediumorchid",
    "mediumpurple",
    "mediumseagreen",
    "mediumslateblue",
    "mediumspringgreen",
    "mediumturquoise",
    "mediumvioletred",
    "midnightblue",
    "mintcream",
    "mistyrose",
    "moccasin",
    "navajowhite",
    "navy",
    "oldlace",
    "olive",
    "olivedrab",
    "orange",
    "orangered",
    "orchid",
    "palegoldenrod",
    "palegreen",
    "paleturquoise",
    "palevioletred",
    "papayawhip",
    "peachpuff",
    "peru",
    "pink",
    "plum",
    "powderblue",
    "purple",
    "rebeccapurple",
    "red",
    "rosybrown",
    "royalblue",
    "saddlebrown",
    "salmon",
    "sandybrown",
    "seagreen",
    "seashell",
    "sienna",
    "silver",
    "skyblue",
    "slateblue",
    "slategrey",
    "snow",
    "springgreen",
    "steelblue",
    "tan",
    "teal",
    "thistle",
    "tomato",
    "turquoise",
    "violet",
    "wheat",
    "white",
    "whitesmoke",
    "yellow",
    "yellowgreen"
};
//[/MiscUserDefs]

//==============================================================================
ColourPicker::ColourPicker ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    for (int i=0 ; i<MaxColours ; i++)
        NewTextButton (bnColor[i], MyColours[i]);
    lbColourName.reset(new Label("lbColourName"));
    lbColourName->setText("Colour Name", dontSendNotification);
    lbColourName->setJustificationType(Justification::centred);
    addAndMakeVisible(lbColourName.get());
    lbColourHex.reset(new Label("lbColourHex"));
    lbColourHex->setText("0xff323e44", dontSendNotification);
    lbColourHex->setJustificationType(Justification::centred);
    addAndMakeVisible(lbColourHex.get());
    lbColourDisplay.reset(new Label("lbColourHex"));
    addAndMakeVisible(lbColourDisplay.get());
    //[/Constructor_pre]


    //[UserPreSize]
    int w, h;
    LoadSize(w, h);
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    setSize(w, h);
    filler = juce::Colour(0xff323e44);
    //[/Constructor]
}

ColourPicker::~ColourPicker()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ColourPicker::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    auto full = getLocalBounds().reduced(4);
    DBG("Full  : " << full.getX() << ", " << full.getY() << ", " << full.getWidth() << ", " << full.getHeight() << ", ");
    auto panel = full.removeFromRight(full.getWidth() / 4);
    DBG("panel1: " << panel.getX() << ", " << panel.getY() << ", " << panel.getWidth() << ", " << panel.getHeight() << ", ");
    int     hight = panel.getHeight() / 20;
    panel.removeFromTop(hight * 5);
    panel = panel.reduced(10);
    DBG("panel2: " << panel.getX() << ", " << panel.getY() << ", " << panel.getWidth() << ", " << panel.getHeight() << ", ");
    g.setColour(filler);
    g.fillRect(panel.toFloat());
    //[/UserPaint]
}

void ColourPicker::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    auto area = getLocalBounds();
    SaveSize(area.getWidth(), area.getHeight());

    auto full = getLocalBounds().reduced(4);
    auto panel = full.removeFromRight(full.getWidth() / 4);
    int     hight = panel.getHeight() / 20;
    panel.removeFromTop(hight);
    Font newfont = Font("arial", (float) hight, Font::bold);
    lbColourName->setBounds(panel.removeFromTop(hight));
    lbColourName->setFont(newfont);
    panel.removeFromTop(hight);
    lbColourHex->setBounds(panel.removeFromTop(hight));
    lbColourHex->setFont(newfont);
    panel.removeFromTop(hight);
    panel.removeFromBottom(hight);
    lbColourDisplay->setBounds(panel.reduced(10));
    Rectangle<int> bounds[140];
    int bnwidth = full.getWidth() / 14;
    int bnheight = full.getHeight() / 10;
    for (int row = 0; row < 10; row++)
    {
        auto strip = full.removeFromTop(bnheight);
        for (int col = 0; col < 14; col++)
        {
            bounds[(row * 14) + col] = strip.removeFromLeft(bnwidth).reduced(3);
        }
    }
    for (int i = 0; i < MaxColours; i++)
        bnColor[i]->setBounds(bounds[i]);
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void ColourPicker::buttonClicked(Button* buttonThatWasClicked)
{
    //DBG("Button Clicked " << buttonThatWasClicked->getName());
    for (int i = 0; i < MaxColours; i++)
    {
        if (buttonThatWasClicked == bnColor[i].get())
        {
            Colour c = MyColours[i];
            lbColourName->setText(MyColourNamess[i], dontSendNotification);
            lbColourHex->setText(c.toString(), dontSendNotification);
            lbColourDisplay->setColour(Label::backgroundColourId, c);
            //HandleButton(c);
            break;
        }
    }
}

void ColourPicker::HandleButton(Colour c)
{
    filler = c;
    lbColourHex->setText (c.toString(), dontSendNotification);
}

void ColourPicker::SaveSize (int w, int h)
{
    // Create a PropertiesFile object
    juce::PropertiesFile propertiesFile(juce::File::getSpecialLocation(juce::File::userApplicationDataDirectory)
        .getChildFile(INI_FILENAME), juce::PropertiesFile::Options());

    // Set some key-value pairs
    propertiesFile.setValue("Width", w);
    propertiesFile.setValue("Height", h);

    // Save the settings to file
    propertiesFile.saveIfNeeded();
}

void ColourPicker::LoadSize(int& w, int& h)
{
    // Create a PropertiesFile object
    juce::PropertiesFile propertiesFile(juce::File::getSpecialLocation(juce::File::userApplicationDataDirectory)
        .getChildFile(INI_FILENAME), juce::PropertiesFile::Options());

    // Retrieve values by key
    h = propertiesFile.getIntValue("Height", 800);
    w = propertiesFile.getIntValue("Width", 1000);
}

void ColourPicker::NewTextButton(std::unique_ptr<TextButton>& bn, Colour Col, bool Sticky)
{
    bn.reset(new TextButton(""));
    addAndMakeVisible(bn.get());
    bn->setButtonText("");
    bn->setColour(TextButton::buttonColourId, Col);
    bn->setColour(TextButton::buttonOnColourId, Col);
    if (Sticky)
        bn->setClickingTogglesState(true);
    bn->addListener(this);
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ColourPicker" componentName=""
                 parentClasses="public Component, public Button::Listener" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

