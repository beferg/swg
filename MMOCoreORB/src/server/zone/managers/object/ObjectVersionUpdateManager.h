/*
 * ObjectVersionUpdateManager.h
 *
 *  Created on: Oct 28, 2010
 *      Author: oru
 */

#ifndef OBJECTVERSIONUPDATEMANAGER_H_
#define OBJECTVERSIONUPDATEMANAGER_H_

#include "engine/engine.h"

class ObjectVersionUpdateManager : public Singleton<ObjectVersionUpdateManager>, public Logger, public Object {
	Lua* luaInstance;
public:
	ObjectVersionUpdateManager();

	void initialize();

	void checkCurrentRevision();
	void runScripts();

	int updateToVersion2();
	int updateToVersion3();

	ObjectOutputStream* addVariable(String variableName, ObjectInputStream* object, Stream* newVariableData);
	int getVariableDataOffset(const uint32& variableHashCode, ObjectInputStream* stream);
	ObjectOutputStream* changeVariableData(const uint32& variableHashCode, ObjectInputStream* object, Stream* newVariableData);


	void updateResidences();
	void setResidence(uint64 buildingID, bool isResidence);
	void verifyResidenceVariables();
	void updateWeaponsDots();
	void updateStructurePermissionLists();
	String getOwnerName(uint64 ownerID);

	void updateCityTreasury();
	int run();




};


#endif /* OBJECTVERSIONUPDATEMANAGER_H_ */
