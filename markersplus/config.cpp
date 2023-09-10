class CfgPatches
{
	class mplus_markers
	{
		name = "Markers+"; 
		author = "Pek";
		picture = "";
		logoSmall = "";
		logo = "";
		tooltipOwned = "Markers+ By Pek";
		overview = "Markers+ allows platoon/company level Command elements to better manage their markers on the map using different symbols, text and terms.";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		requiredVersion = 0.1;
	};
};

class CfgMarkerClasses
{
	class mplus_tasks
	{
		displayName = "(M+) Tasks";
	};
	class mplus_movement
	{
		displayName = "(M+) Movement and Manuever";
	};
	class mplus_points
	{
		displayName = "(M+) Points";
	};
};

class CfgMarkers
{
	// Tasks
	class mplus_aapoint
	{
		markerClass="mplus_points";
		name="Generic Point";
		icon="markersplus\data\img\aapoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_ambush: mplus_aapoint
	{
		markerClass="mplus_tasks";
		name="Ambush";
		icon="markersplus\data\img\ambush.paa";
	};
	class mplus_attackbyfire: mplus_ambush
	{
		name="Attack by fire";
		icon="markersplus\data\img\attackbyfire.paa";
	};
	class mplus_breach: mplus_ambush
	{
		name="Breach";
		icon="markersplus\data\img\breach.paa";
	};
	class mplus_bypass: mplus_ambush
	{
		name="Bypass";
		icon="markersplus\data\img\bypass.paa";
	};
	class mplus_clear: mplus_ambush
	{
		name="Clear";
		icon="markersplus\data\img\clear.paa";
	};
	class mplus_disengage: mplus_ambush
	{
		name="Disengage";
		icon="markersplus\data\img\disengage.paa";
	};
	class mplus_exfiltrate: mplus_ambush
	{
		name="Exfiltrate";
		icon="markersplus\data\img\exfiltrate.paa";
	};
	class mplus_followassume: mplus_ambush
	{
		name="Follow and Assume";
		icon="markersplus\data\img\followassume.paa";
	};
	class mplus_followsupport: mplus_ambush
	{
		name="Follow and Support";
		icon="markersplus\data\img\followsupport.paa";
	};
	class mplus_occupy: mplus_ambush
	{
		name="Occupy";
		icon="markersplus\data\img\occupy.paa";
	};
	class mplus_retain: mplus_ambush
	{
		name="Retain";
		icon="markersplus\data\img\retain.paa";
	};
	class mplus_secure: mplus_ambush
	{
		name="Secure";
		icon="markersplus\data\img\secure.paa";
	};
	class mplus_seize: mplus_ambush
	{
		name="Seize";
		icon="markersplus\data\img\seize.paa";
	};
	class mplus_supportbyfire: mplus_ambush
	{
		name="Support by Fire";
		icon="markersplus\data\img\supportbyfire.paa";
	};
	class mplus_block: mplus_ambush
	{
		name="Block";
		icon="markersplus\data\img\block.paa";
	};
	class mplus_canalize: mplus_ambush
	{
		name="Canalize";
		icon="markersplus\data\img\canalize.paa";
	};
	class mplus_contain: mplus_ambush
	{
		name="Contain";
		icon="markersplus\data\img\contain.paa";
	};
	class mplus_destroy: mplus_ambush
	{
		name="Destroy";
		icon="markersplus\data\img\destroy.paa";
	};
	class mplus_disrupt: mplus_ambush
	{
		name="Disrupt";
		icon="markersplus\data\img\disrupt.paa";
	};
	class mplus_fix: mplus_ambush
	{
		name="Fix";
		icon="markersplus\data\img\fix.paa";
	};
	class mplus_isolate: mplus_ambush
	{
		name="Isolate";
		icon="markersplus\data\img\isolate.paa";
	};
	class mplus_interdict: mplus_ambush
	{
		name="Interdict";
		icon="markersplus\data\img\interdict.paa";
	};
	class mplus_neutralize: mplus_ambush
	{
		name="Neutralize";
		icon="markersplus\data\img\neutralize.paa";
	};
	class mplus_supress: mplus_ambush
	{
		name="Supress";
		icon="markersplus\data\img\supress.paa";
	};
	class mplus_turn: mplus_ambush
	{
		name="Turn";
		icon="markersplus\data\img\turn.paa";
	};
	class mplus_cordonknock: mplus_ambush
	{
		name="Cordon and Knock";
		icon="markersplus\data\img\cordonknock.paa";
	};
	class mplus_cordonsearch: mplus_ambush
	{
		name="Cordon and Search";
		icon="markersplus\data\img\cordonsearch.paa";
	};
	class mplus_guard: mplus_ambush
	{
		name="Guard";
		icon="markersplus\data\img\guard.paa";
	};
	class mplus_screen: mplus_ambush
	{
		name="Screen";
		icon="markersplus\data\img\screen.paa";
	};
	class mplus_cover: mplus_ambush
	{
		name="Cover";
		icon="markersplus\data\img\cover.paa";
	};

	// Movement and Manuever
	class mplus_feintattack: mplus_aapoint
	{
		markerClass="mplus_movement";
		name="Feint attack Arrow";
		icon="markersplus\data\img\feintattack.paa";
	};
	class mplus_mainattack: mplus_feintattack
	{
		name="Main attack Arrow";
		icon="markersplus\data\img\mainattack.paa";
	};
	class mplus_phaseline: mplus_feintattack
	{
		name="Phaseline";
		icon="markersplus\data\img\phaseline.paa";
	};

	// Points
	class mplus_checkpoint: mplus_aapoint
	{
		name="Checkpoint";
		icon="markersplus\data\img\checkpoint.paa";
	};
	class mplus_linkuppoint: mplus_checkpoint
	{
		name="Linkup Point";
		icon="markersplus\data\img\linkuppoint.paa";
	};
	class mplus_passagepoint: mplus_checkpoint
	{
		name="Passage Point";
		icon="markersplus\data\img\passagepoint.paa";
	};
	class mplus_rallypoint: mplus_checkpoint
	{
		name="Rally Point";
		icon="markersplus\data\img\rallypoint.paa";
	};
	class mplus_releasepoint: mplus_checkpoint
	{
		name="Release Point";
		icon="markersplus\data\img\releasepoint.paa";
	};
	class mplus_startpoint: mplus_checkpoint
	{
		name="Start Point";
		icon="markersplus\data\img\startpoint.paa";
	};
	class mplus_departurepoint: mplus_checkpoint
	{
		name="Point of Departure";
		icon="markersplus\data\img\departurepoint.paa";
	};
	class mplus_civpoint: mplus_checkpoint
	{
		name="Civilian Collection Point";
		icon="markersplus\data\img\civpoint.paa";
	};
	class mplus_iprp: mplus_checkpoint
	{
		name="Isolated Personnel Recovery Point";
		icon="markersplus\data\img\iprp.paa";
	};
	class mplus_sarpoint: mplus_checkpoint
	{
		name="Search and Rescue Point";
		icon="markersplus\data\img\sarpoint.paa";
	};
	class mplus_ammopoint: mplus_checkpoint
	{
		name="Ammunition Supply Point";
		icon="markersplus\data\img\ammopoint.paa";
	};
	class mplus_ccppoint: mplus_checkpoint
	{
		name="Casualty Collection Point";
		icon="markersplus\data\img\ccppoint.paa";
	};
	class mplus_medevac: mplus_checkpoint
	{
		name="Medical Evacuation Point";
		icon="markersplus\data\img\medevac.paa";
	};
	class mplus_r3p: mplus_checkpoint
	{
		name="Rearm, Refuel and Resupply Point";
		icon="markersplus\data\img\r3p.paa";
	};
	class mplus_waypoint: mplus_checkpoint
	{
		name="Waypoint";
		icon="markersplus\data\img\waypoint.paa";
	};
};
