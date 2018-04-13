// WIP
while(true)
{
	if ( abs(GetJoystickAnalog(/*joystick channel you want to use for strafing. ex: Ch1, Ch4*/)) <= 3) //You could make the "<=3" into "==0", but this way there is a slight deadband
	{
		//Use easyC stock tank or arcade function here:
		Arcade2();
	}
	
	else
	{
		JoyStickToMotor (/*Set the channel to the one used in the if statement above*/);
	}
}
