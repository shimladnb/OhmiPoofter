/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include <math.h>


//==============================================================================
MainContentComponent::MainContentComponent()
{
    setSize (600, 400);
    startAudioCallback();
}

MainContentComponent::~MainContentComponent()
{
    stopAudioCallback();
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (0xff001F36));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}

void MainContentComponent::audioCallback(float** buffer, int channels, int frames)
{
    for (int ch=0; ch < channels; ch++) {
        for (int fr = 0; fr < frames; fr++) {
           // buffer[ch][fr] = pow(buffer[ch],3);
            //float poep = previous
            currentSample = buffer [ch][fr];
            //filteruitrekenen
            
            //geschiedenis opslaan
            //previous = buffer[ch][fr]
            //buffer[ch][fr] = 0;
        }
    }
}
