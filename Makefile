WORKDIR = `pwd`

CC = gcc
CXX = g++
AR = ar
LD = g++
WINDRES = windres

INC = 
CFLAGS = -Wall -fexceptions
RESINC = 
LIBDIR = 
LIB = 
LDFLAGS = 

INC_DEBUG = $(INC)
CFLAGS_DEBUG = $(CFLAGS) -std=c++11 -Wall -pg -g
RESINC_DEBUG = $(RESINC)
RCFLAGS_DEBUG = $(RCFLAGS)
LIBDIR_DEBUG = $(LIBDIR)
LIB_DEBUG = $(LIB)
LDFLAGS_DEBUG = $(LDFLAGS) -pg -lgmon
OBJDIR_DEBUG = obj/Debug
DEP_DEBUG = 
OUT_DEBUG = bin/Debug/spelet

INC_RELEASE = $(INC)
CFLAGS_RELEASE = $(CFLAGS) -O2 -std=c++11
RESINC_RELEASE = $(RESINC)
RCFLAGS_RELEASE = $(RCFLAGS)
LIBDIR_RELEASE = $(LIBDIR)
LIB_RELEASE = $(LIB)
LDFLAGS_RELEASE = $(LDFLAGS)
OBJDIR_RELEASE = obj/Release
DEP_RELEASE = 
OUT_RELEASE = bin/Release/spelet

OBJ_DEBUG = $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Silence.o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Polymorph.o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Ice_Lance.o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Frostbolt.o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Frost_Nova.o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Deep_Freeze.o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Cone_of_Cold.o $(OBJDIR_DEBUG)/src/Actions/Attacks/Ranged_Attacks/Shuriken_Toss.o $(OBJDIR_DEBUG)/src/Actions/Attacks/Ranged_Attacks/Bottle_Toss.o $(OBJDIR_DEBUG)/src/Actions/Attacks/Melee_Attacks/Shank.o $(OBJDIR_DEBUG)/src/Actions/Attacks/Melee_Attacks/Katana_Slice.o $(OBJDIR_DEBUG)/src/Actions/Attack.o $(OBJDIR_DEBUG)/src/Actions/Action.o $(OBJDIR_DEBUG)/src/Tools/Random.o $(OBJDIR_DEBUG)/src/Tools/Engine.o $(OBJDIR_DEBUG)/src/Tools/Balance.o $(OBJDIR_DEBUG)/src/Status_Effects/Status_Effect.o $(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Silenced.o $(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Sheeped.o $(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Frozen.o $(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Deep_Frozen.o $(OBJDIR_DEBUG)/src/Status_Effects/Buffs/Iceberged.o $(OBJDIR_DEBUG)/src/Status_Effects/Buffs/Frozen_Armor.o $(OBJDIR_DEBUG)/src/Status_Effects/Buffs/Absorb_Shield.o $(OBJDIR_DEBUG)/src/Actors/Player/Player.o $(OBJDIR_DEBUG)/src/Actors/Enemies/Ranged/Mages/White_Mage.o $(OBJDIR_DEBUG)/src/Actors/Enemies/Ranged/Mages/Black_Mage.o $(OBJDIR_DEBUG)/src/Actors/Enemies/Melee/Humanoids/Pirate.o $(OBJDIR_DEBUG)/src/Actors/Enemies/Melee/Humanoids/Ninja.o $(OBJDIR_DEBUG)/src/Actors/Actor.o $(OBJDIR_DEBUG)/src/Actions/Defensive/Supportive_Ability/Dispell.o $(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.o $(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability/Healing_Spell.o $(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.o $(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.o $(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Smite.o $(OBJDIR_DEBUG)/Main2.o

OBJ_RELEASE = $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Silence.o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Polymorph.o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Ice_Lance.o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Frostbolt.o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Frost_Nova.o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Deep_Freeze.o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Cone_of_Cold.o $(OBJDIR_RELEASE)/src/Actions/Attacks/Ranged_Attacks/Shuriken_Toss.o $(OBJDIR_RELEASE)/src/Actions/Attacks/Ranged_Attacks/Bottle_Toss.o $(OBJDIR_RELEASE)/src/Actions/Attacks/Melee_Attacks/Shank.o $(OBJDIR_RELEASE)/src/Actions/Attacks/Melee_Attacks/Katana_Slice.o $(OBJDIR_RELEASE)/src/Actions/Attack.o $(OBJDIR_RELEASE)/src/Actions/Action.o $(OBJDIR_RELEASE)/src/Tools/Random.o $(OBJDIR_RELEASE)/src/Tools/Engine.o $(OBJDIR_RELEASE)/src/Tools/Balance.o $(OBJDIR_RELEASE)/src/Status_Effects/Status_Effect.o $(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Silenced.o $(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Sheeped.o $(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Frozen.o $(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Deep_Frozen.o $(OBJDIR_RELEASE)/src/Status_Effects/Buffs/Iceberged.o $(OBJDIR_RELEASE)/src/Status_Effects/Buffs/Frozen_Armor.o $(OBJDIR_RELEASE)/src/Status_Effects/Buffs/Absorb_Shield.o $(OBJDIR_RELEASE)/src/Actors/Player/Player.o $(OBJDIR_RELEASE)/src/Actors/Enemies/Ranged/Mages/White_Mage.o $(OBJDIR_RELEASE)/src/Actors/Enemies/Ranged/Mages/Black_Mage.o $(OBJDIR_RELEASE)/src/Actors/Enemies/Melee/Humanoids/Pirate.o $(OBJDIR_RELEASE)/src/Actors/Enemies/Melee/Humanoids/Ninja.o $(OBJDIR_RELEASE)/src/Actors/Actor.o $(OBJDIR_RELEASE)/src/Actions/Defensive/Supportive_Ability/Dispell.o $(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.o $(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability/Healing_Spell.o $(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.o $(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.o $(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Smite.o $(OBJDIR_RELEASE)/Main2.o

all: debug release

clean: clean_debug clean_release

before_debug: 
	test -d bin/Debug || mkdir -p bin/Debug
	test -d $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks || mkdir -p $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks
	test -d $(OBJDIR_DEBUG)/src/Actions/Attacks/Ranged_Attacks || mkdir -p $(OBJDIR_DEBUG)/src/Actions/Attacks/Ranged_Attacks
	test -d $(OBJDIR_DEBUG)/src/Actions/Attacks/Melee_Attacks || mkdir -p $(OBJDIR_DEBUG)/src/Actions/Attacks/Melee_Attacks
	test -d $(OBJDIR_DEBUG)/src/Actions || mkdir -p $(OBJDIR_DEBUG)/src/Actions
	test -d $(OBJDIR_DEBUG)/src/Tools || mkdir -p $(OBJDIR_DEBUG)/src/Tools
	test -d $(OBJDIR_DEBUG)/src/Status_Effects || mkdir -p $(OBJDIR_DEBUG)/src/Status_Effects
	test -d $(OBJDIR_DEBUG)/src/Status_Effects/Debuffs || mkdir -p $(OBJDIR_DEBUG)/src/Status_Effects/Debuffs
	test -d $(OBJDIR_DEBUG)/src/Status_Effects/Buffs || mkdir -p $(OBJDIR_DEBUG)/src/Status_Effects/Buffs
	test -d $(OBJDIR_DEBUG)/src/Actors/Player || mkdir -p $(OBJDIR_DEBUG)/src/Actors/Player
	test -d $(OBJDIR_DEBUG)/src/Actors/Enemies/Ranged/Mages || mkdir -p $(OBJDIR_DEBUG)/src/Actors/Enemies/Ranged/Mages
	test -d $(OBJDIR_DEBUG)/src/Actors/Enemies/Melee/Humanoids || mkdir -p $(OBJDIR_DEBUG)/src/Actors/Enemies/Melee/Humanoids
	test -d $(OBJDIR_DEBUG)/src/Actors || mkdir -p $(OBJDIR_DEBUG)/src/Actors
	test -d $(OBJDIR_DEBUG)/src/Actions/Defensive/Supportive_Ability || mkdir -p $(OBJDIR_DEBUG)/src/Actions/Defensive/Supportive_Ability
	test -d $(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability/Healing_Spells || mkdir -p $(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability/Healing_Spells
	test -d $(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability || mkdir -p $(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability
	test -d $(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells || mkdir -p $(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells
	test -d $(OBJDIR_DEBUG) || mkdir -p $(OBJDIR_DEBUG)

after_debug: 

debug: before_debug out_debug after_debug

out_debug: before_debug $(OBJ_DEBUG) $(DEP_DEBUG)
	$(LD) $(LIBDIR_DEBUG) -o $(OUT_DEBUG) $(OBJ_DEBUG)  $(LDFLAGS_DEBUG) $(LIB_DEBUG)

$(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Silence.o: src/Actions/Attacks/Spell_Attacks/Silence.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Spell_Attacks/Silence.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Silence.o

$(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Polymorph.o: src/Actions/Attacks/Spell_Attacks/Polymorph.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Spell_Attacks/Polymorph.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Polymorph.o

$(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Ice_Lance.o: src/Actions/Attacks/Spell_Attacks/Ice_Lance.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Spell_Attacks/Ice_Lance.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Ice_Lance.o

$(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Frostbolt.o: src/Actions/Attacks/Spell_Attacks/Frostbolt.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Spell_Attacks/Frostbolt.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Frostbolt.o

$(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Frost_Nova.o: src/Actions/Attacks/Spell_Attacks/Frost_Nova.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Spell_Attacks/Frost_Nova.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Frost_Nova.o

$(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Deep_Freeze.o: src/Actions/Attacks/Spell_Attacks/Deep_Freeze.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Spell_Attacks/Deep_Freeze.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Deep_Freeze.o

$(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Cone_of_Cold.o: src/Actions/Attacks/Spell_Attacks/Cone_of_Cold.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Spell_Attacks/Cone_of_Cold.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Cone_of_Cold.o

$(OBJDIR_DEBUG)/src/Actions/Attacks/Ranged_Attacks/Shuriken_Toss.o: src/Actions/Attacks/Ranged_Attacks/Shuriken_Toss.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Ranged_Attacks/Shuriken_Toss.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Ranged_Attacks/Shuriken_Toss.o

$(OBJDIR_DEBUG)/src/Actions/Attacks/Ranged_Attacks/Bottle_Toss.o: src/Actions/Attacks/Ranged_Attacks/Bottle_Toss.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Ranged_Attacks/Bottle_Toss.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Ranged_Attacks/Bottle_Toss.o

$(OBJDIR_DEBUG)/src/Actions/Attacks/Melee_Attacks/Shank.o: src/Actions/Attacks/Melee_Attacks/Shank.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Melee_Attacks/Shank.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Melee_Attacks/Shank.o

$(OBJDIR_DEBUG)/src/Actions/Attacks/Melee_Attacks/Katana_Slice.o: src/Actions/Attacks/Melee_Attacks/Katana_Slice.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Melee_Attacks/Katana_Slice.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Melee_Attacks/Katana_Slice.o

$(OBJDIR_DEBUG)/src/Actions/Attack.o: src/Actions/Attack.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attack.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attack.o

$(OBJDIR_DEBUG)/src/Actions/Action.o: src/Actions/Action.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Action.cpp -o $(OBJDIR_DEBUG)/src/Actions/Action.o

$(OBJDIR_DEBUG)/src/Tools/Random.o: src/Tools/Random.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Tools/Random.cpp -o $(OBJDIR_DEBUG)/src/Tools/Random.o

$(OBJDIR_DEBUG)/src/Tools/Engine.o: src/Tools/Engine.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Tools/Engine.cpp -o $(OBJDIR_DEBUG)/src/Tools/Engine.o

$(OBJDIR_DEBUG)/src/Tools/Balance.o: src/Tools/Balance.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Tools/Balance.cpp -o $(OBJDIR_DEBUG)/src/Tools/Balance.o

$(OBJDIR_DEBUG)/src/Status_Effects/Status_Effect.o: src/Status_Effects/Status_Effect.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Status_Effects/Status_Effect.cpp -o $(OBJDIR_DEBUG)/src/Status_Effects/Status_Effect.o

$(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Silenced.o: src/Status_Effects/Debuffs/Silenced.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Status_Effects/Debuffs/Silenced.cpp -o $(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Silenced.o

$(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Sheeped.o: src/Status_Effects/Debuffs/Sheeped.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Status_Effects/Debuffs/Sheeped.cpp -o $(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Sheeped.o

$(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Frozen.o: src/Status_Effects/Debuffs/Frozen.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Status_Effects/Debuffs/Frozen.cpp -o $(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Frozen.o

$(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Deep_Frozen.o: src/Status_Effects/Debuffs/Deep_Frozen.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Status_Effects/Debuffs/Deep_Frozen.cpp -o $(OBJDIR_DEBUG)/src/Status_Effects/Debuffs/Deep_Frozen.o

$(OBJDIR_DEBUG)/src/Status_Effects/Buffs/Iceberged.o: src/Status_Effects/Buffs/Iceberged.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Status_Effects/Buffs/Iceberged.cpp -o $(OBJDIR_DEBUG)/src/Status_Effects/Buffs/Iceberged.o

$(OBJDIR_DEBUG)/src/Status_Effects/Buffs/Frozen_Armor.o: src/Status_Effects/Buffs/Frozen_Armor.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Status_Effects/Buffs/Frozen_Armor.cpp -o $(OBJDIR_DEBUG)/src/Status_Effects/Buffs/Frozen_Armor.o

$(OBJDIR_DEBUG)/src/Status_Effects/Buffs/Absorb_Shield.o: src/Status_Effects/Buffs/Absorb_Shield.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Status_Effects/Buffs/Absorb_Shield.cpp -o $(OBJDIR_DEBUG)/src/Status_Effects/Buffs/Absorb_Shield.o

$(OBJDIR_DEBUG)/src/Actors/Player/Player.o: src/Actors/Player/Player.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actors/Player/Player.cpp -o $(OBJDIR_DEBUG)/src/Actors/Player/Player.o

$(OBJDIR_DEBUG)/src/Actors/Enemies/Ranged/Mages/White_Mage.o: src/Actors/Enemies/Ranged/Mages/White_Mage.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actors/Enemies/Ranged/Mages/White_Mage.cpp -o $(OBJDIR_DEBUG)/src/Actors/Enemies/Ranged/Mages/White_Mage.o

$(OBJDIR_DEBUG)/src/Actors/Enemies/Ranged/Mages/Black_Mage.o: src/Actors/Enemies/Ranged/Mages/Black_Mage.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actors/Enemies/Ranged/Mages/Black_Mage.cpp -o $(OBJDIR_DEBUG)/src/Actors/Enemies/Ranged/Mages/Black_Mage.o

$(OBJDIR_DEBUG)/src/Actors/Enemies/Melee/Humanoids/Pirate.o: src/Actors/Enemies/Melee/Humanoids/Pirate.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actors/Enemies/Melee/Humanoids/Pirate.cpp -o $(OBJDIR_DEBUG)/src/Actors/Enemies/Melee/Humanoids/Pirate.o

$(OBJDIR_DEBUG)/src/Actors/Enemies/Melee/Humanoids/Ninja.o: src/Actors/Enemies/Melee/Humanoids/Ninja.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actors/Enemies/Melee/Humanoids/Ninja.cpp -o $(OBJDIR_DEBUG)/src/Actors/Enemies/Melee/Humanoids/Ninja.o

$(OBJDIR_DEBUG)/src/Actors/Actor.o: src/Actors/Actor.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actors/Actor.cpp -o $(OBJDIR_DEBUG)/src/Actors/Actor.o

$(OBJDIR_DEBUG)/src/Actions/Defensive/Supportive_Ability/Dispell.o: src/Actions/Defensive/Supportive_Ability/Dispell.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Defensive/Supportive_Ability/Dispell.cpp -o $(OBJDIR_DEBUG)/src/Actions/Defensive/Supportive_Ability/Dispell.o

$(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.o: src/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.cpp -o $(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.o

$(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability/Healing_Spell.o: src/Actions/Defensive/Healing_Ability/Healing_Spell.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Defensive/Healing_Ability/Healing_Spell.cpp -o $(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability/Healing_Spell.o

$(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.o: src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.cpp -o $(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.o

$(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.o: src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.cpp -o $(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.o

$(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.o: src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.cpp -o $(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.o

$(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Smite.o: src/Actions/Attacks/Spell_Attacks/Smite.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/Actions/Attacks/Spell_Attacks/Smite.cpp -o $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks/Smite.o

$(OBJDIR_DEBUG)/Main2.o: Main2.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c Main2.cpp -o $(OBJDIR_DEBUG)/Main2.o

clean_debug: 
	rm -f $(OBJ_DEBUG) $(OUT_DEBUG)
	rm -rf bin/Debug
	rm -rf $(OBJDIR_DEBUG)/src/Actions/Attacks/Spell_Attacks
	rm -rf $(OBJDIR_DEBUG)/src/Actions/Attacks/Ranged_Attacks
	rm -rf $(OBJDIR_DEBUG)/src/Actions/Attacks/Melee_Attacks
	rm -rf $(OBJDIR_DEBUG)/src/Actions
	rm -rf $(OBJDIR_DEBUG)/src/Tools
	rm -rf $(OBJDIR_DEBUG)/src/Status_Effects
	rm -rf $(OBJDIR_DEBUG)/src/Status_Effects/Debuffs
	rm -rf $(OBJDIR_DEBUG)/src/Status_Effects/Buffs
	rm -rf $(OBJDIR_DEBUG)/src/Actors/Player
	rm -rf $(OBJDIR_DEBUG)/src/Actors/Enemies/Ranged/Mages
	rm -rf $(OBJDIR_DEBUG)/src/Actors/Enemies/Melee/Humanoids
	rm -rf $(OBJDIR_DEBUG)/src/Actors
	rm -rf $(OBJDIR_DEBUG)/src/Actions/Defensive/Supportive_Ability
	rm -rf $(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability/Healing_Spells
	rm -rf $(OBJDIR_DEBUG)/src/Actions/Defensive/Healing_Ability
	rm -rf $(OBJDIR_DEBUG)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells
	rm -rf $(OBJDIR_DEBUG)

before_release: 
	test -d bin/Release || mkdir -p bin/Release
	test -d $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks || mkdir -p $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks
	test -d $(OBJDIR_RELEASE)/src/Actions/Attacks/Ranged_Attacks || mkdir -p $(OBJDIR_RELEASE)/src/Actions/Attacks/Ranged_Attacks
	test -d $(OBJDIR_RELEASE)/src/Actions/Attacks/Melee_Attacks || mkdir -p $(OBJDIR_RELEASE)/src/Actions/Attacks/Melee_Attacks
	test -d $(OBJDIR_RELEASE)/src/Actions || mkdir -p $(OBJDIR_RELEASE)/src/Actions
	test -d $(OBJDIR_RELEASE)/src/Tools || mkdir -p $(OBJDIR_RELEASE)/src/Tools
	test -d $(OBJDIR_RELEASE)/src/Status_Effects || mkdir -p $(OBJDIR_RELEASE)/src/Status_Effects
	test -d $(OBJDIR_RELEASE)/src/Status_Effects/Debuffs || mkdir -p $(OBJDIR_RELEASE)/src/Status_Effects/Debuffs
	test -d $(OBJDIR_RELEASE)/src/Status_Effects/Buffs || mkdir -p $(OBJDIR_RELEASE)/src/Status_Effects/Buffs
	test -d $(OBJDIR_RELEASE)/src/Actors/Player || mkdir -p $(OBJDIR_RELEASE)/src/Actors/Player
	test -d $(OBJDIR_RELEASE)/src/Actors/Enemies/Ranged/Mages || mkdir -p $(OBJDIR_RELEASE)/src/Actors/Enemies/Ranged/Mages
	test -d $(OBJDIR_RELEASE)/src/Actors/Enemies/Melee/Humanoids || mkdir -p $(OBJDIR_RELEASE)/src/Actors/Enemies/Melee/Humanoids
	test -d $(OBJDIR_RELEASE)/src/Actors || mkdir -p $(OBJDIR_RELEASE)/src/Actors
	test -d $(OBJDIR_RELEASE)/src/Actions/Defensive/Supportive_Ability || mkdir -p $(OBJDIR_RELEASE)/src/Actions/Defensive/Supportive_Ability
	test -d $(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability/Healing_Spells || mkdir -p $(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability/Healing_Spells
	test -d $(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability || mkdir -p $(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability
	test -d $(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells || mkdir -p $(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells
	test -d $(OBJDIR_RELEASE) || mkdir -p $(OBJDIR_RELEASE)

after_release: 

release: before_release out_release after_release

out_release: before_release $(OBJ_RELEASE) $(DEP_RELEASE)
	$(LD) $(LIBDIR_RELEASE) -o $(OUT_RELEASE) $(OBJ_RELEASE)  $(LDFLAGS_RELEASE) $(LIB_RELEASE)

$(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Silence.o: src/Actions/Attacks/Spell_Attacks/Silence.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Spell_Attacks/Silence.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Silence.o

$(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Polymorph.o: src/Actions/Attacks/Spell_Attacks/Polymorph.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Spell_Attacks/Polymorph.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Polymorph.o

$(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Ice_Lance.o: src/Actions/Attacks/Spell_Attacks/Ice_Lance.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Spell_Attacks/Ice_Lance.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Ice_Lance.o

$(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Frostbolt.o: src/Actions/Attacks/Spell_Attacks/Frostbolt.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Spell_Attacks/Frostbolt.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Frostbolt.o

$(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Frost_Nova.o: src/Actions/Attacks/Spell_Attacks/Frost_Nova.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Spell_Attacks/Frost_Nova.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Frost_Nova.o

$(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Deep_Freeze.o: src/Actions/Attacks/Spell_Attacks/Deep_Freeze.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Spell_Attacks/Deep_Freeze.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Deep_Freeze.o

$(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Cone_of_Cold.o: src/Actions/Attacks/Spell_Attacks/Cone_of_Cold.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Spell_Attacks/Cone_of_Cold.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Cone_of_Cold.o

$(OBJDIR_RELEASE)/src/Actions/Attacks/Ranged_Attacks/Shuriken_Toss.o: src/Actions/Attacks/Ranged_Attacks/Shuriken_Toss.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Ranged_Attacks/Shuriken_Toss.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Ranged_Attacks/Shuriken_Toss.o

$(OBJDIR_RELEASE)/src/Actions/Attacks/Ranged_Attacks/Bottle_Toss.o: src/Actions/Attacks/Ranged_Attacks/Bottle_Toss.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Ranged_Attacks/Bottle_Toss.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Ranged_Attacks/Bottle_Toss.o

$(OBJDIR_RELEASE)/src/Actions/Attacks/Melee_Attacks/Shank.o: src/Actions/Attacks/Melee_Attacks/Shank.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Melee_Attacks/Shank.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Melee_Attacks/Shank.o

$(OBJDIR_RELEASE)/src/Actions/Attacks/Melee_Attacks/Katana_Slice.o: src/Actions/Attacks/Melee_Attacks/Katana_Slice.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Melee_Attacks/Katana_Slice.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Melee_Attacks/Katana_Slice.o

$(OBJDIR_RELEASE)/src/Actions/Attack.o: src/Actions/Attack.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attack.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attack.o

$(OBJDIR_RELEASE)/src/Actions/Action.o: src/Actions/Action.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Action.cpp -o $(OBJDIR_RELEASE)/src/Actions/Action.o

$(OBJDIR_RELEASE)/src/Tools/Random.o: src/Tools/Random.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Tools/Random.cpp -o $(OBJDIR_RELEASE)/src/Tools/Random.o

$(OBJDIR_RELEASE)/src/Tools/Engine.o: src/Tools/Engine.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Tools/Engine.cpp -o $(OBJDIR_RELEASE)/src/Tools/Engine.o

$(OBJDIR_RELEASE)/src/Tools/Balance.o: src/Tools/Balance.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Tools/Balance.cpp -o $(OBJDIR_RELEASE)/src/Tools/Balance.o

$(OBJDIR_RELEASE)/src/Status_Effects/Status_Effect.o: src/Status_Effects/Status_Effect.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Status_Effects/Status_Effect.cpp -o $(OBJDIR_RELEASE)/src/Status_Effects/Status_Effect.o

$(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Silenced.o: src/Status_Effects/Debuffs/Silenced.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Status_Effects/Debuffs/Silenced.cpp -o $(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Silenced.o

$(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Sheeped.o: src/Status_Effects/Debuffs/Sheeped.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Status_Effects/Debuffs/Sheeped.cpp -o $(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Sheeped.o

$(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Frozen.o: src/Status_Effects/Debuffs/Frozen.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Status_Effects/Debuffs/Frozen.cpp -o $(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Frozen.o

$(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Deep_Frozen.o: src/Status_Effects/Debuffs/Deep_Frozen.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Status_Effects/Debuffs/Deep_Frozen.cpp -o $(OBJDIR_RELEASE)/src/Status_Effects/Debuffs/Deep_Frozen.o

$(OBJDIR_RELEASE)/src/Status_Effects/Buffs/Iceberged.o: src/Status_Effects/Buffs/Iceberged.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Status_Effects/Buffs/Iceberged.cpp -o $(OBJDIR_RELEASE)/src/Status_Effects/Buffs/Iceberged.o

$(OBJDIR_RELEASE)/src/Status_Effects/Buffs/Frozen_Armor.o: src/Status_Effects/Buffs/Frozen_Armor.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Status_Effects/Buffs/Frozen_Armor.cpp -o $(OBJDIR_RELEASE)/src/Status_Effects/Buffs/Frozen_Armor.o

$(OBJDIR_RELEASE)/src/Status_Effects/Buffs/Absorb_Shield.o: src/Status_Effects/Buffs/Absorb_Shield.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Status_Effects/Buffs/Absorb_Shield.cpp -o $(OBJDIR_RELEASE)/src/Status_Effects/Buffs/Absorb_Shield.o

$(OBJDIR_RELEASE)/src/Actors/Player/Player.o: src/Actors/Player/Player.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actors/Player/Player.cpp -o $(OBJDIR_RELEASE)/src/Actors/Player/Player.o

$(OBJDIR_RELEASE)/src/Actors/Enemies/Ranged/Mages/White_Mage.o: src/Actors/Enemies/Ranged/Mages/White_Mage.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actors/Enemies/Ranged/Mages/White_Mage.cpp -o $(OBJDIR_RELEASE)/src/Actors/Enemies/Ranged/Mages/White_Mage.o

$(OBJDIR_RELEASE)/src/Actors/Enemies/Ranged/Mages/Black_Mage.o: src/Actors/Enemies/Ranged/Mages/Black_Mage.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actors/Enemies/Ranged/Mages/Black_Mage.cpp -o $(OBJDIR_RELEASE)/src/Actors/Enemies/Ranged/Mages/Black_Mage.o

$(OBJDIR_RELEASE)/src/Actors/Enemies/Melee/Humanoids/Pirate.o: src/Actors/Enemies/Melee/Humanoids/Pirate.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actors/Enemies/Melee/Humanoids/Pirate.cpp -o $(OBJDIR_RELEASE)/src/Actors/Enemies/Melee/Humanoids/Pirate.o

$(OBJDIR_RELEASE)/src/Actors/Enemies/Melee/Humanoids/Ninja.o: src/Actors/Enemies/Melee/Humanoids/Ninja.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actors/Enemies/Melee/Humanoids/Ninja.cpp -o $(OBJDIR_RELEASE)/src/Actors/Enemies/Melee/Humanoids/Ninja.o

$(OBJDIR_RELEASE)/src/Actors/Actor.o: src/Actors/Actor.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actors/Actor.cpp -o $(OBJDIR_RELEASE)/src/Actors/Actor.o

$(OBJDIR_RELEASE)/src/Actions/Defensive/Supportive_Ability/Dispell.o: src/Actions/Defensive/Supportive_Ability/Dispell.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Defensive/Supportive_Ability/Dispell.cpp -o $(OBJDIR_RELEASE)/src/Actions/Defensive/Supportive_Ability/Dispell.o

$(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.o: src/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.cpp -o $(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.o

$(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability/Healing_Spell.o: src/Actions/Defensive/Healing_Ability/Healing_Spell.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Defensive/Healing_Ability/Healing_Spell.cpp -o $(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability/Healing_Spell.o

$(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.o: src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.cpp -o $(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.o

$(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.o: src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.cpp -o $(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.o

$(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.o: src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.cpp -o $(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.o

$(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Smite.o: src/Actions/Attacks/Spell_Attacks/Smite.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/Actions/Attacks/Spell_Attacks/Smite.cpp -o $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks/Smite.o

$(OBJDIR_RELEASE)/Main2.o: Main2.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c Main2.cpp -o $(OBJDIR_RELEASE)/Main2.o

clean_release: 
	rm -f $(OBJ_RELEASE) $(OUT_RELEASE)
	rm -rf bin/Release
	rm -rf $(OBJDIR_RELEASE)/src/Actions/Attacks/Spell_Attacks
	rm -rf $(OBJDIR_RELEASE)/src/Actions/Attacks/Ranged_Attacks
	rm -rf $(OBJDIR_RELEASE)/src/Actions/Attacks/Melee_Attacks
	rm -rf $(OBJDIR_RELEASE)/src/Actions
	rm -rf $(OBJDIR_RELEASE)/src/Tools
	rm -rf $(OBJDIR_RELEASE)/src/Status_Effects
	rm -rf $(OBJDIR_RELEASE)/src/Status_Effects/Debuffs
	rm -rf $(OBJDIR_RELEASE)/src/Status_Effects/Buffs
	rm -rf $(OBJDIR_RELEASE)/src/Actors/Player
	rm -rf $(OBJDIR_RELEASE)/src/Actors/Enemies/Ranged/Mages
	rm -rf $(OBJDIR_RELEASE)/src/Actors/Enemies/Melee/Humanoids
	rm -rf $(OBJDIR_RELEASE)/src/Actors
	rm -rf $(OBJDIR_RELEASE)/src/Actions/Defensive/Supportive_Ability
	rm -rf $(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability/Healing_Spells
	rm -rf $(OBJDIR_RELEASE)/src/Actions/Defensive/Healing_Ability
	rm -rf $(OBJDIR_RELEASE)/src/Actions/Defensive/Buffing_Ability/Buffing_Spells
	rm -rf $(OBJDIR_RELEASE)

.PHONY: before_debug after_debug clean_debug before_release after_release clean_release

