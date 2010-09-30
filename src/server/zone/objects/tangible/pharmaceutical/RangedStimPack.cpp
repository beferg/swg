/*
 *	server/zone/objects/tangible/pharmaceutical/RangedStimPack.cpp generated by engine3 IDL compiler 0.60
 */

#include "RangedStimPack.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	RangedStimPackStub
 */

RangedStimPack::RangedStimPack() : StimPack(DummyConstructorParameter::instance()) {
	_impl = new RangedStimPackImplementation();
	_impl->_setStub(this);
}

RangedStimPack::RangedStimPack(DummyConstructorParameter* param) : StimPack(param) {
}

RangedStimPack::~RangedStimPack() {
}


void RangedStimPack::updateCraftingValues(ManufactureSchematic* schematic) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((RangedStimPackImplementation*) _impl)->updateCraftingValues(schematic);
}

void RangedStimPack::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((RangedStimPackImplementation*) _impl)->fillAttributeList(msg, object);
}

void RangedStimPack::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((RangedStimPackImplementation*) _impl)->loadTemplateData(templateData);
}

unsigned int RangedStimPack::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(healer);
		method.addObjectParameter(patient);
		method.addBooleanParameter(applyBattleFatigue);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((RangedStimPackImplementation*) _impl)->calculatePower(healer, patient, applyBattleFatigue);
}

float RangedStimPack::getRange(CreatureObject* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(creature);

		return method.executeWithFloatReturn();
	} else
		return ((RangedStimPackImplementation*) _impl)->getRange(creature);
}

float RangedStimPack::getEffectiveness() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithFloatReturn();
	} else
		return ((RangedStimPackImplementation*) _impl)->getEffectiveness();
}

float RangedStimPack::getArea() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithFloatReturn();
	} else
		return ((RangedStimPackImplementation*) _impl)->getArea();
}

bool RangedStimPack::isArea() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithBooleanReturn();
	} else
		return ((RangedStimPackImplementation*) _impl)->isArea();
}

float RangedStimPack::getRangeMod() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithFloatReturn();
	} else
		return ((RangedStimPackImplementation*) _impl)->getRangeMod();
}

bool RangedStimPack::isRangedStimPack() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithBooleanReturn();
	} else
		return ((RangedStimPackImplementation*) _impl)->isRangedStimPack();
}

/*
 *	RangedStimPackImplementation
 */

RangedStimPackImplementation::RangedStimPackImplementation(DummyConstructorParameter* param) : StimPackImplementation(param) {
	_initializeImplementation();
}


RangedStimPackImplementation::~RangedStimPackImplementation() {
}


void RangedStimPackImplementation::finalize() {
}

void RangedStimPackImplementation::_initializeImplementation() {
	_setClassHelper(RangedStimPackHelper::instance());

	_serializationHelperMethod();
}

void RangedStimPackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (RangedStimPack*) stub;
	StimPackImplementation::_setStub(stub);
}

DistributedObjectStub* RangedStimPackImplementation::_getStub() {
	return _this;
}

RangedStimPackImplementation::operator const RangedStimPack*() {
	return _this;
}

void RangedStimPackImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void RangedStimPackImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void RangedStimPackImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void RangedStimPackImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void RangedStimPackImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void RangedStimPackImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void RangedStimPackImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void RangedStimPackImplementation::_serializationHelperMethod() {
	StimPackImplementation::_serializationHelperMethod();

	_setClassName("RangedStimPack");

	addSerializableVariable("effectiveness", &effectiveness);
	addSerializableVariable("range", &range);
	addSerializableVariable("area", &area);
	addSerializableVariable("rangeMod", &rangeMod);
}

RangedStimPackImplementation::RangedStimPackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(68):  		setLoggingName("RangedStimPack");
	setLoggingName("RangedStimPack");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(70):  		effectiveness = 0;
	effectiveness = 0;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(71):  		area = 0;
	area = 0;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(72):  		range = 0;
	range = 0;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(73):  		rangeMod = 0;
	rangeMod = 0;
}

void RangedStimPackImplementation::updateCraftingValues(ManufactureSchematic* schematic) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(78):  		CraftingValues craftingValues = schematic.getCraftingValues();
	CraftingValues* craftingValues = schematic->getCraftingValues();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(80):  		effectiveness = craftingValues.getCurrentValue("power");
	effectiveness = craftingValues->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(81):  		super.medicineUseRequired = craftingValues.getCurrentValue("skillmodmin");
	StimPackImplementation::medicineUseRequired = craftingValues->getCurrentValue("skillmodmin");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(82):  		setUseCount(craftingValues.getCurrentValue("charges"));
	setUseCount(craftingValues->getCurrentValue("charges"));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(84):  		range = craftingValues.getCurrentValue("range");
	range = craftingValues->getCurrentValue("range");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(86):  	}
	if (craftingValues->hasProperty("area")){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(87):  			area = craftingValues.getCurrentValue("area");
	area = craftingValues->getCurrentValue("area");
}
}

void RangedStimPackImplementation::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(100):  		msg.insertAttribute("examine_heal_damage_health", Math.getPrecision(effectiveness, 0));
	msg->insertAttribute("examine_heal_damage_health", Math::getPrecision(effectiveness, 0));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(101):  		msg.insertAttribute("examine_heal_damage_action", Math.getPrecision(effectiveness, 0));
	msg->insertAttribute("examine_heal_damage_action", Math::getPrecision(effectiveness, 0));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(102):  		msg.insertAttribute("examine_heal_range", Math.getPrecision(range, 0));
	msg->insertAttribute("examine_heal_range", Math::getPrecision(range, 0));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(104):  
	if (isArea()){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(105):  			msg.insertAttribute("examine_heal_area", Math.getPrecision(area, 0));
	msg->insertAttribute("examine_heal_area", Math::getPrecision(area, 0));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(106):  			msg.insertAttribute("combat_healing_ability", super.medicineUseRequired);
	msg->insertAttribute("combat_healing_ability", StimPackImplementation::medicineUseRequired);
}

	else {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(108):  			msg.insertAttribute("combat_healing_ability", super.medicineUseRequired);
	msg->insertAttribute("combat_healing_ability", StimPackImplementation::medicineUseRequired);
}
}

void RangedStimPackImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(120):  		super.loadTemplateData(templateData);
	StimPackImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(122):  		RangedStimPackTemplate 
	if (!templateData->isRangedStimPackTemplate())	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(123):  			return;
	return;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(125):  stimPackTemplate = (RangedStimPackTemplate) templateData;
	RangedStimPackTemplate* stimPackTemplate = (RangedStimPackTemplate*) templateData;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(127):  		effectiveness = stimPackTemplate.getEffectiveness();
	effectiveness = stimPackTemplate->getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(128):  		super.medicineUseRequired = stimPackTemplate.getMedicineUse();
	StimPackImplementation::medicineUseRequired = stimPackTemplate->getMedicineUse();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(129):  		area = stimPackTemplate.getArea();
	area = stimPackTemplate->getArea();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(130):  		range = stimPackTemplate.getRange();
	range = stimPackTemplate->getRange();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(131):  		rangeMod = stimPackTemplate.getRangeMod();
	rangeMod = stimPackTemplate->getRangeMod();
}

unsigned int RangedStimPackImplementation::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(135):  		float power = getEffectiveness();
	float power = getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(137):  		float 
	if (applyBattleFatigue){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(138):  			power = power - power * patient.calculateBFRatio();
	power = power - power * patient->calculateBFRatio();
}
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(141):  modSkill = (float) healer.getSkillMod("combat_medic_effectiveness");
	float modSkill = (float) healer->getSkillMod("combat_medic_effectiveness");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(143):  		return (100 + modSkill) / 100 * power;
	return (100 + modSkill) / 100 * power;
}

float RangedStimPackImplementation::getRange(CreatureObject* creature) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(147):  		float modSkill = 0;
	float modSkill = 0;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(149):  		float 
	if (creature != NULL){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(150):  			modSkill = creature.getSkillMod("healing_range");
	modSkill = creature->getSkillMod("healing_range");
}
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(153):  value = (100 + rangeMod * modSkill) / 100 * range;
	float value = (100 + rangeMod * modSkill) / 100 * range;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(155):  		return value;
	return value;
}

float RangedStimPackImplementation::getEffectiveness() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(159):  		return effectiveness;
	return effectiveness;
}

float RangedStimPackImplementation::getArea() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(163):  		return area;
	return area;
}

bool RangedStimPackImplementation::isArea() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(167):  		return area != 0;
	return area != 0;
}

float RangedStimPackImplementation::getRangeMod() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(171):  		return rangeMod;
	return rangeMod;
}

bool RangedStimPackImplementation::isRangedStimPack() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl(175):  		return true;
	return true;
}

/*
 *	RangedStimPackAdapter
 */

RangedStimPackAdapter::RangedStimPackAdapter(RangedStimPackImplementation* obj) : StimPackAdapter(obj) {
}

Packet* RangedStimPackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertInt(calculatePower((CreatureObject*) inv->getObjectParameter(), (CreatureObject*) inv->getObjectParameter(), inv->getBooleanParameter()));
		break;
	case 7:
		resp->insertFloat(getRange((CreatureObject*) inv->getObjectParameter()));
		break;
	case 8:
		resp->insertFloat(getEffectiveness());
		break;
	case 9:
		resp->insertFloat(getArea());
		break;
	case 10:
		resp->insertBoolean(isArea());
		break;
	case 11:
		resp->insertFloat(getRangeMod());
		break;
	case 12:
		resp->insertBoolean(isRangedStimPack());
		break;
	default:
		return NULL;
	}

	return resp;
}

unsigned int RangedStimPackAdapter::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	return ((RangedStimPackImplementation*) impl)->calculatePower(healer, patient, applyBattleFatigue);
}

float RangedStimPackAdapter::getRange(CreatureObject* creature) {
	return ((RangedStimPackImplementation*) impl)->getRange(creature);
}

float RangedStimPackAdapter::getEffectiveness() {
	return ((RangedStimPackImplementation*) impl)->getEffectiveness();
}

float RangedStimPackAdapter::getArea() {
	return ((RangedStimPackImplementation*) impl)->getArea();
}

bool RangedStimPackAdapter::isArea() {
	return ((RangedStimPackImplementation*) impl)->isArea();
}

float RangedStimPackAdapter::getRangeMod() {
	return ((RangedStimPackImplementation*) impl)->getRangeMod();
}

bool RangedStimPackAdapter::isRangedStimPack() {
	return ((RangedStimPackImplementation*) impl)->isRangedStimPack();
}

/*
 *	RangedStimPackHelper
 */

RangedStimPackHelper* RangedStimPackHelper::staticInitializer = RangedStimPackHelper::instance();

RangedStimPackHelper::RangedStimPackHelper() {
	className = "RangedStimPack";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void RangedStimPackHelper::finalizeHelper() {
	RangedStimPackHelper::finalize();
}

DistributedObject* RangedStimPackHelper::instantiateObject() {
	return new RangedStimPack(DummyConstructorParameter::instance());
}

DistributedObjectServant* RangedStimPackHelper::instantiateServant() {
	return new RangedStimPackImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* RangedStimPackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RangedStimPackAdapter((RangedStimPackImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

