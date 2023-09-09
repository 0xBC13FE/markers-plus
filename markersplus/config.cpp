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
		name="A Point";
		icon="markersplus\data\img\aapoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_ambush
	{
		markerClass="mplus_tasks";
		name="Ambush";
		icon="markersplus\data\img\ambush.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_attackbyfire
	{
		markerClass="mplus_tasks";
		name="Attack by fire";
		icon="markersplus\data\img\attackbyfire.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_breach
	{
		markerClass="mplus_tasks";
		name="Breach";
		icon="markersplus\data\img\breach.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_bypass
	{
		markerClass="mplus_tasks";
		name="Bypass";
		icon="markersplus\data\img\bypass.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_clear
	{
		markerClass="mplus_tasks";
		name="Clear";
		icon="markersplus\data\img\clear.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_disengage
	{
		markerClass="mplus_tasks";
		name="Disengage";
		icon="markersplus\data\img\disengage.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_exfiltrate
	{
		markerClass="mplus_tasks";
		name="Exfiltrate";
		icon="markersplus\data\img\exfiltrate.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_followassume
	{
		markerClass="mplus_tasks";
		name="Follow and Assume";
		icon="markersplus\data\img\followassume.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_followsupport
	{
		markerClass="mplus_tasks";
		name="Follow and Support";
		icon="markersplus\data\img\followsupport.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_occupy
	{
		markerClass="mplus_tasks";
		name="Occupy";
		icon="markersplus\data\img\occupy.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_retain
	{
		markerClass="mplus_tasks";
		name="Retain";
		icon="markersplus\data\img\retain.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_secure
	{
		markerClass="mplus_tasks";
		name="Secure";
		icon="markersplus\data\img\secure.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_seize
	{
		markerClass="mplus_tasks";
		name="Seize";
		icon="markersplus\data\img\seize.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_supportbyfire
	{
		markerClass="mplus_tasks";
		name="Support by Fire";
		icon="markersplus\data\img\supportbyfire.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_block
	{
		markerClass="mplus_tasks";
		name="Block";
		icon="markersplus\data\img\block.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_canalize
	{
		markerClass="mplus_tasks";
		name="Canalize";
		icon="markersplus\data\img\canalize.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_contain
	{
		markerClass="mplus_tasks";
		name="Contain";
		icon="markersplus\data\img\contain.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_destroy
	{
		markerClass="mplus_tasks";
		name="Destroy";
		icon="markersplus\data\img\destroy.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_disrupt
	{
		markerClass="mplus_tasks";
		name="Disrupt";
		icon="markersplus\data\img\disrupt.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_fix
	{
		markerClass="mplus_tasks";
		name="Fix";
		icon="markersplus\data\img\fix.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_isolate
	{
		markerClass="mplus_tasks";
		name="Isolate";
		icon="markersplus\data\img\isolate.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_interdict
	{
		markerClass="mplus_tasks";
		name="Interdict";
		icon="markersplus\data\img\interdict.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_neutralize
	{
		markerClass="mplus_tasks";
		name="Neutralize";
		icon="markersplus\data\img\neutralize.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_supress
	{
		markerClass="mplus_tasks";
		name="Supress";
		icon="markersplus\data\img\supress.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_turn
	{
		markerClass="mplus_tasks";
		name="Turn";
		icon="markersplus\data\img\turn.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_cordonknock
	{
		markerClass="mplus_tasks";
		name="Cordon and Knock";
		icon="markersplus\data\img\cordonknock.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_cordonsearch
	{
		markerClass="mplus_tasks";
		name="Cordon and Search";
		icon="markersplus\data\img\cordonsearch.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_guard
	{
		markerClass="mplus_tasks";
		name="Guard";
		icon="markersplus\data\img\guard.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_screen
	{
		markerClass="mplus_tasks";
		name="Screen";
		icon="markersplus\data\img\screen.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_cover
	{
		markerClass="mplus_tasks";
		name="Cover";
		icon="markersplus\data\img\cover.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};

	// Movement and Manuever
	class mplus_feintattack
	{
		markerClass="mplus_movement";
		name="Feint attack Arrow";
		icon="markersplus\data\img\feintattack.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_mainattack
	{
		markerClass="mplus_movement";
		name="Main attack Arrow";
		icon="markersplus\data\img\mainattack.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
	class mplus_phaseline
	{
		markerClass="mplus_movement";
		name="Phaseline";
		icon="markersplus\data\img\phaseline.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};

	// Points
		class mplus_checkpoint
	{
		markerClass="mplus_points";
		name="Checkpoint";
		icon="markersplus\data\img\checkpoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_linkuppoint
	{
		markerClass="mplus_points";
		name="Linkup Point";
		icon="markersplus\data\img\linkuppoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_passagepoint
	{
		markerClass="mplus_points";
		name="Passage Point";
		icon="markersplus\data\img\passagepoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_rallypoint
	{
		markerClass="mplus_points";
		name="Rally Point";
		icon="markersplus\data\img\rallypoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_releasepoint
	{
		markerClass="mplus_points";
		name="Release Point";
		icon="markersplus\data\img\releasepoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_startpoint
	{
		markerClass="mplus_points";
		name="Start Point";
		icon="markersplus\data\img\startpoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_departurepoint
	{
		markerClass="mplus_points";
		name="Point of Departure";
		icon="markersplus\data\img\departurepoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_civpoint
	{
		markerClass="mplus_points";
		name="Civilian Collection Point";
		icon="markersplus\data\img\civpoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_iprp
	{
		markerClass="mplus_points";
		name="Isolated Personnel Recovery Point";
		icon="markersplus\data\img\iprp.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_sarpoint
	{
		markerClass="mplus_points";
		name="Search and Rescue Point";
		icon="markersplus\data\img\sarpoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_ammopoint
	{
		markerClass="mplus_points";
		name="Ammunition Supply Point";
		icon="markersplus\data\img\ammopoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_ccppoint
	{
		markerClass="mplus_points";
		name="Casualty Collection Point";
		icon="markersplus\data\img\ccppoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_medevac
	{
		markerClass="mplus_points";
		name="Medical Evacuation Point";
		icon="markersplus\data\img\medevac.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_r3p
	{
		markerClass="mplus_points";
		name="Rearm, Refuel and Resupply Point";
		icon="markersplus\data\img\r3p.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_waypoint
	{
		markerClass="mplus_points";
		name="Waypoint";
		icon="markersplus\data\img\waypoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
		class mplus_departurepoint
	{
		markerClass="mplus_points";
		name="Point of Departure";
		icon="markersplus\data\img\departurepoint.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		showEditorMarkerColor=1;
	};
};