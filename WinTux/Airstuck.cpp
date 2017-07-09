#include "Airstuck.h"

void Airstuck::CreateMove(CUserCmd* cmd)
{

	if (cmd->buttons & IN_ATTACK || cmd->buttons & IN_ATTACK2)
		return;

	if (IInputSystem->IsButtonDown)
		cmd->tick_count = 16777216;
}