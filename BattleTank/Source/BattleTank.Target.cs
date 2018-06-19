// /***  2014 - 2017 Grenunny Productions All Rights Reserved.** NOTICE:* All information contained herein is, and remains the property of Grenunny Productions* and its suppliers, if any. The intellectual and technical concepts contained herein* are proprietary to Grenunny Productions and its suppliers and may be covered by U.S.* and Foreign Patents, patents in process, and are protected by trade secret or copyright law.* Dissemination of this information or reproduction of this material is strictly forbidden* unless prior written permission is obtained from Grenunny Productions.*/

using UnrealBuildTool;
using System.Collections.Generic;

public class BattleTankTarget : TargetRules
{
	public BattleTankTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "BattleTank" } );
	}
}
