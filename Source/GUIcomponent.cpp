/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "GUIcomponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GUIcomponent::GUIcomponent ()
{
    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::Rotary);
    slider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider->setColour (Slider::backgroundColourId, Colour (0xffba2929));
    slider->setColour (Slider::thumbColourId, Colour (0xffc42323));
    slider->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    slider->addListener (this);

    addAndMakeVisible (slider2 = new Slider ("new slider"));
    slider2->setRange (0, 10, 0);
    slider2->setSliderStyle (Slider::Rotary);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->setColour (Slider::thumbColourId, Colour (0xffc42323));
    slider2->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    slider2->addListener (this);

    addAndMakeVisible (slider3 = new Slider ("new slider"));
    slider3->setRange (0, 10, 0);
    slider3->setSliderStyle (Slider::Rotary);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->setColour (Slider::thumbColourId, Colour (0xffc42323));
    slider3->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    slider3->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GUIcomponent::~GUIcomponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    slider = nullptr;
    slider2 = nullptr;
    slider3 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GUIcomponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GUIcomponent::resized()
{
    slider->setBounds (40, 96, 120, 168);
    slider2->setBounds (237, 96, 120, 168);
    slider3->setBounds (440, 96, 120, 168);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void GUIcomponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider2)
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3)
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GUIcomponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <SLIDER name="new slider" id="5f4adf9862e9380f" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="40 96 120 168" bkgcol="ffba2929"
          thumbcol="ffc42323" rotarysliderfill="7f000000" min="0" max="10"
          int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="acbf916742105ee" memberName="slider2" virtualName=""
          explicitFocusOrder="0" pos="237 96 120 168" thumbcol="ffc42323"
          rotarysliderfill="7f000000" min="0" max="10" int="0" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="726c414943ea94f2" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="440 96 120 168" thumbcol="ffc42323"
          rotarysliderfill="7f000000" min="0" max="10" int="0" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
