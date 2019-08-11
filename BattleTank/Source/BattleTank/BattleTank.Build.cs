// /***  2014 - 2017 Grenunny Productions All Rights Reserved.** NOTICE:* All information contained herein is, and remains the property of Grenunny Productions* and its suppliers, if any. The intellectual and technical concepts contained herein* are proprietary to Grenunny Productions and its suppliers and may be covered by U.S.* and Foreign Patents, patents in process, and are protected by trade secret or copyright law.* Dissemination of this information or reproduction of this material is strictly forbidden* unless prior written permission is obtained from Grenunny Productions.*/

using UnrealBuildTool;

public class BattleTank : ModuleRules
{
	public BattleTank(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG", "Slate", "SlateCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
