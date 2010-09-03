/*
 *	server/zone/objects/mission/DeliverMissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "DeliverMissionObjective.h"

#include "server/zone/objects/scene/Observer.h"

#include "server/zone/objects/scene/Observable.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/AiAgent.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/area/MissionSpawnActiveArea.h"

#include "server/zone/objects/tangible/lair/LairObject.h"

/*
 *	DeliverMissionObjectiveStub
 */

DeliverMissionObjective::DeliverMissionObjective(MissionObject* mission) : MissionObjective(DummyConstructorParameter::instance()) {
	_impl = new DeliverMissionObjectiveImplementation(mission);
	_impl->_setStub(this);
}

DeliverMissionObjective::DeliverMissionObjective(DummyConstructorParameter* param) : MissionObjective(param) {
}

DeliverMissionObjective::~DeliverMissionObjective() {
}


void DeliverMissionObjective::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((DeliverMissionObjectiveImplementation*) _impl)->initializeTransientMembers();
}

void DeliverMissionObjective::setTarget(AiAgent* t) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(t);

		method.executeWithVoidReturn();
	} else
		((DeliverMissionObjectiveImplementation*) _impl)->setTarget(t);
}

void DeliverMissionObjective::setTargetDest(AiAgent* t) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(t);

		method.executeWithVoidReturn();
	} else
		((DeliverMissionObjectiveImplementation*) _impl)->setTargetDest(t);
}

TangibleObject* DeliverMissionObjective::getItem() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return ((DeliverMissionObjectiveImplementation*) _impl)->getItem();
}

void DeliverMissionObjective::activate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((DeliverMissionObjectiveImplementation*) _impl)->activate();
}

void DeliverMissionObjective::abort() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((DeliverMissionObjectiveImplementation*) _impl)->abort();
}

void DeliverMissionObjective::complete() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		((DeliverMissionObjectiveImplementation*) _impl)->complete();
}

void DeliverMissionObjective::destroyObjectFromDatabase() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		((DeliverMissionObjectiveImplementation*) _impl)->destroyObjectFromDatabase();
}

int DeliverMissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return ((DeliverMissionObjectiveImplementation*) _impl)->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

bool DeliverMissionObjective::updateMissionTarget(CreatureObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return ((DeliverMissionObjectiveImplementation*) _impl)->updateMissionTarget(player);
}

/*
 *	DeliverMissionObjectiveImplementation
 */

DeliverMissionObjectiveImplementation::DeliverMissionObjectiveImplementation(DummyConstructorParameter* param) : MissionObjectiveImplementation(param) {
	_initializeImplementation();
}

DeliverMissionObjectiveImplementation::~DeliverMissionObjectiveImplementation() {
	DeliverMissionObjectiveImplementation::finalize();
}


void DeliverMissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(DeliverMissionObjectiveHelper::instance());

	_serializationHelperMethod();
}

void DeliverMissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (DeliverMissionObjective*) stub;
	MissionObjectiveImplementation::_setStub(stub);
}

DistributedObjectStub* DeliverMissionObjectiveImplementation::_getStub() {
	return _this;
}

DeliverMissionObjectiveImplementation::operator const DeliverMissionObjective*() {
	return _this;
}

void DeliverMissionObjectiveImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void DeliverMissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void DeliverMissionObjectiveImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void DeliverMissionObjectiveImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void DeliverMissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void DeliverMissionObjectiveImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void DeliverMissionObjectiveImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void DeliverMissionObjectiveImplementation::_serializationHelperMethod() {
	MissionObjectiveImplementation::_serializationHelperMethod();

	_setClassName("DeliverMissionObjective");

	addSerializableVariable("target", &target);
	addSerializableVariable("targetDest", &targetDest);
	addSerializableVariable("item", &item);
	addSerializableVariable("objectiveStatus", &objectiveStatus);
}

DeliverMissionObjectiveImplementation::DeliverMissionObjectiveImplementation(MissionObject* mission) : MissionObjectiveImplementation(mission) {
	_initializeImplementation();
	// server/zone/objects/mission/DeliverMissionObjective.idl(71):  		Logger.setLoggingName("DeliverMissionObjective");
	Logger::setLoggingName("DeliverMissionObjective");
}

void DeliverMissionObjectiveImplementation::finalize() {
	// server/zone/objects/mission/DeliverMissionObjective.idl(75):  		Logger.info("deleting from memory", true);
	Logger::info("deleting from memory", true);
}

void DeliverMissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/DeliverMissionObjective.idl(79):  		super.initializeTransientMembers();
	MissionObjectiveImplementation::initializeTransientMembers();
	// server/zone/objects/mission/DeliverMissionObjective.idl(81):  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
	// server/zone/objects/mission/DeliverMissionObjective.idl(83):  		activate();
	activate();
}

void DeliverMissionObjectiveImplementation::setTarget(AiAgent* t) {
	// server/zone/objects/mission/DeliverMissionObjective.idl(87):  		target = t;
	target = t;
}

void DeliverMissionObjectiveImplementation::setTargetDest(AiAgent* t) {
	// server/zone/objects/mission/DeliverMissionObjective.idl(91):  		targetDest = t;
	targetDest = t;
}

TangibleObject* DeliverMissionObjectiveImplementation::getItem() {
	// server/zone/objects/mission/DeliverMissionObjective.idl(95):  		return item;
	return item;
}

/*
 *	DeliverMissionObjectiveAdapter
 */

DeliverMissionObjectiveAdapter::DeliverMissionObjectiveAdapter(DeliverMissionObjectiveImplementation* obj) : MissionObjectiveAdapter(obj) {
}

Packet* DeliverMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		finalize();
		break;
	case 7:
		initializeTransientMembers();
		break;
	case 8:
		setTarget((AiAgent*) inv->getObjectParameter());
		break;
	case 9:
		setTargetDest((AiAgent*) inv->getObjectParameter());
		break;
	case 10:
		resp->insertLong(getItem()->_getObjectID());
		break;
	case 11:
		activate();
		break;
	case 12:
		abort();
		break;
	case 13:
		complete();
		break;
	case 14:
		destroyObjectFromDatabase();
		break;
	case 15:
		resp->insertSignedInt(notifyObserverEvent((MissionObserver*) inv->getObjectParameter(), inv->getUnsignedIntParameter(), (Observable*) inv->getObjectParameter(), (ManagedObject*) inv->getObjectParameter(), inv->getSignedLongParameter()));
		break;
	case 16:
		resp->insertBoolean(updateMissionTarget((CreatureObject*) inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void DeliverMissionObjectiveAdapter::finalize() {
	((DeliverMissionObjectiveImplementation*) impl)->finalize();
}

void DeliverMissionObjectiveAdapter::initializeTransientMembers() {
	((DeliverMissionObjectiveImplementation*) impl)->initializeTransientMembers();
}

void DeliverMissionObjectiveAdapter::setTarget(AiAgent* t) {
	((DeliverMissionObjectiveImplementation*) impl)->setTarget(t);
}

void DeliverMissionObjectiveAdapter::setTargetDest(AiAgent* t) {
	((DeliverMissionObjectiveImplementation*) impl)->setTargetDest(t);
}

TangibleObject* DeliverMissionObjectiveAdapter::getItem() {
	return ((DeliverMissionObjectiveImplementation*) impl)->getItem();
}

void DeliverMissionObjectiveAdapter::activate() {
	((DeliverMissionObjectiveImplementation*) impl)->activate();
}

void DeliverMissionObjectiveAdapter::abort() {
	((DeliverMissionObjectiveImplementation*) impl)->abort();
}

void DeliverMissionObjectiveAdapter::complete() {
	((DeliverMissionObjectiveImplementation*) impl)->complete();
}

void DeliverMissionObjectiveAdapter::destroyObjectFromDatabase() {
	((DeliverMissionObjectiveImplementation*) impl)->destroyObjectFromDatabase();
}

int DeliverMissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return ((DeliverMissionObjectiveImplementation*) impl)->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

bool DeliverMissionObjectiveAdapter::updateMissionTarget(CreatureObject* player) {
	return ((DeliverMissionObjectiveImplementation*) impl)->updateMissionTarget(player);
}

/*
 *	DeliverMissionObjectiveHelper
 */

DeliverMissionObjectiveHelper* DeliverMissionObjectiveHelper::staticInitializer = DeliverMissionObjectiveHelper::instance();

DeliverMissionObjectiveHelper::DeliverMissionObjectiveHelper() {
	className = "DeliverMissionObjective";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void DeliverMissionObjectiveHelper::finalizeHelper() {
	DeliverMissionObjectiveHelper::finalize();
}

DistributedObject* DeliverMissionObjectiveHelper::instantiateObject() {
	return new DeliverMissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* DeliverMissionObjectiveHelper::instantiateServant() {
	return new DeliverMissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* DeliverMissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DeliverMissionObjectiveAdapter((DeliverMissionObjectiveImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

