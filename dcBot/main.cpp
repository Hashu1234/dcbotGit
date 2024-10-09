//
//  main.cpp
//  dcBot
//
//  Created by Ziad Sidawi on 9.10.2024.
//

#include <iostream>
#include "sleepy-discord/include/sleepy_discord/sleepy_discord.h"



int main()
{
    
    
}

void SleepyDiscord::BaseDiscordClient::onMessage(Message message)
{
    if(message=="hello")
    {
        SleepyDiscord::BaseDiscordClient::sendMessage(message.channelID, "hai");
    }
}
