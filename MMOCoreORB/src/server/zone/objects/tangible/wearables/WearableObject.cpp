/*
 *	server/zone/objects/tangible/wearables/WearableObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "WearableObject.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	WearableObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_APPLYATTACHMENT__CREATUREOBJECT_ATTACHMENT_,RPC_SETATTACHMENTMODS__CREATUREOBJECT_BOOL_BOOL_,RPC_ISWEARABLEOBJECT__,RPC_ISEQUIPPED__,RPC_GETMAXSOCKETS__,RPC_SOCKETSUSED__,RPC_SOCKETSLEFT__,RPC_REPAIRATTEMPT__INT_,};

WearableObject::WearableObject() : TangibleObject(DummyConstructorParameter::instance()) {
	WearableObjectImplementation* _implementation = new WearableObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("WearableObject");
}

WearableObject::WearableObject(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("WearableObject");
}

WearableObject::~WearableObject() {
}



void WearableObject::initializeTransientMembers() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void WearableObject::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void WearableObject::updateCraftingValues(CraftingValues* values, bool initialUpdate) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, initialUpdate);
}

void WearableObject::applyAttachment(CreatureObject* player, Attachment* attachment) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_APPLYATTACHMENT__CREATUREOBJECT_ATTACHMENT_);
		method.addObjectParameter(player);
		method.addObjectParameter(attachment);

		method.executeWithVoidReturn();
	} else
		_implementation->applyAttachment(player, attachment);
}

void WearableObject::setAttachmentMods(CreatureObject* player, bool remove, bool doCheck) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETATTACHMENTMODS__CREATUREOBJECT_BOOL_BOOL_);
		method.addObjectParameter(player);
		method.addBooleanParameter(remove);
		method.addBooleanParameter(doCheck);

		method.executeWithVoidReturn();
	} else
		_implementation->setAttachmentMods(player, remove, doCheck);
}

bool WearableObject::isWearableObject() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISWEARABLEOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isWearableObject();
}

bool WearableObject::isEquipped() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISEQUIPPED__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isEquipped();
}

int WearableObject::getMaxSockets() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMAXSOCKETS__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMaxSockets();
}

int WearableObject::socketsUsed() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SOCKETSUSED__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->socketsUsed();
}

int WearableObject::socketsLeft() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SOCKETSLEFT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->socketsLeft();
}

String WearableObject::repairAttempt(int repairChance) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REPAIRATTEMPT__INT_);
		method.addSignedIntParameter(repairChance);

		String _return_repairAttempt;
		method.executeWithAsciiReturn(_return_repairAttempt);
		return _return_repairAttempt;
	} else
		return _implementation->repairAttempt(repairChance);
}

VectorMap<String, int>* WearableObject::getWearableSkillMods() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getWearableSkillMods();
}

void WearableObject::addWearableSkillMod(const String& mod, int value) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->addWearableSkillMod(mod, value);
}

DistributedObjectServant* WearableObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void WearableObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	WearableObjectImplementation
 */

WearableObjectImplementation::WearableObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


WearableObjectImplementation::~WearableObjectImplementation() {
}


void WearableObjectImplementation::finalize() {
}

void WearableObjectImplementation::_initializeImplementation() {
	_setClassHelper(WearableObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void WearableObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<WearableObject*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* WearableObjectImplementation::_getStub() {
	return _this.get();
}

WearableObjectImplementation::operator const WearableObject*() {
	return _this.get();
}

void WearableObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void WearableObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void WearableObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void WearableObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void WearableObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void WearableObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void WearableObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void WearableObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("WearableObject");

}

void WearableObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(WearableObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool WearableObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "WearableObject.socketCount") {
		TypeInfo<int >::parseFromBinaryStream(&socketCount, stream);
		return true;
	}

	if (_name == "WearableObject.socketsGenerated") {
		TypeInfo<bool >::parseFromBinaryStream(&socketsGenerated, stream);
		return true;
	}

	if (_name == "WearableObject.wearableSkillMods") {
		TypeInfo<VectorMap<String, int> >::parseFromBinaryStream(&wearableSkillMods, stream);
		return true;
	}


	return false;
}

void WearableObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = WearableObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int WearableObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "WearableObject.socketCount";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&socketCount, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "WearableObject.socketsGenerated";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&socketsGenerated, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "WearableObject.wearableSkillMods";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<VectorMap<String, int> >::toBinaryStream(&wearableSkillMods, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 3;
}

WearableObjectImplementation::WearableObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		socketsGenerated = false;
	socketsGenerated = false;
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		socketCount = 0;
	socketCount = 0;
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		wearableSkillMods.setAllowOverwriteInsertPlan();
	(&wearableSkillMods)->setAllowOverwriteInsertPlan();
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		Logger.setLoggingName("WearableObject");
	Logger::setLoggingName("WearableObject");
}

bool WearableObjectImplementation::isWearableObject() {
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		return true;
	return true;
}

int WearableObjectImplementation::getMaxSockets() {
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		return socketCount;
	return socketCount;
}

int WearableObjectImplementation::socketsLeft() {
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		return getMaxSockets() - socketsUsed();
	return getMaxSockets() - socketsUsed();
}

VectorMap<String, int>* WearableObjectImplementation::getWearableSkillMods() {
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		return wearableSkillMods;
	return (&wearableSkillMods);
}

void WearableObjectImplementation::addWearableSkillMod(const String& mod, int value) {
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		wearableSkillMods.put(mod, value);
	(&wearableSkillMods)->put(mod, value);
}

/*
 *	WearableObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


WearableObjectAdapter::WearableObjectAdapter(WearableObject* obj) : TangibleObjectAdapter(obj) {
}

void WearableObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_APPLYATTACHMENT__CREATUREOBJECT_ATTACHMENT_:
		{
			applyAttachment(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<Attachment*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SETATTACHMENTMODS__CREATUREOBJECT_BOOL_BOOL_:
		{
			setAttachmentMods(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getBooleanParameter(), inv->getBooleanParameter());
		}
		break;
	case RPC_ISWEARABLEOBJECT__:
		{
			resp->insertBoolean(isWearableObject());
		}
		break;
	case RPC_ISEQUIPPED__:
		{
			resp->insertBoolean(isEquipped());
		}
		break;
	case RPC_GETMAXSOCKETS__:
		{
			resp->insertSignedInt(getMaxSockets());
		}
		break;
	case RPC_SOCKETSUSED__:
		{
			resp->insertSignedInt(socketsUsed());
		}
		break;
	case RPC_SOCKETSLEFT__:
		{
			resp->insertSignedInt(socketsLeft());
		}
		break;
	case RPC_REPAIRATTEMPT__INT_:
		{
			resp->insertAscii(repairAttempt(inv->getSignedIntParameter()));
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void WearableObjectAdapter::initializeTransientMembers() {
	(static_cast<WearableObject*>(stub))->initializeTransientMembers();
}

void WearableObjectAdapter::applyAttachment(CreatureObject* player, Attachment* attachment) {
	(static_cast<WearableObject*>(stub))->applyAttachment(player, attachment);
}

void WearableObjectAdapter::setAttachmentMods(CreatureObject* player, bool remove, bool doCheck) {
	(static_cast<WearableObject*>(stub))->setAttachmentMods(player, remove, doCheck);
}

bool WearableObjectAdapter::isWearableObject() {
	return (static_cast<WearableObject*>(stub))->isWearableObject();
}

bool WearableObjectAdapter::isEquipped() {
	return (static_cast<WearableObject*>(stub))->isEquipped();
}

int WearableObjectAdapter::getMaxSockets() {
	return (static_cast<WearableObject*>(stub))->getMaxSockets();
}

int WearableObjectAdapter::socketsUsed() {
	return (static_cast<WearableObject*>(stub))->socketsUsed();
}

int WearableObjectAdapter::socketsLeft() {
	return (static_cast<WearableObject*>(stub))->socketsLeft();
}

String WearableObjectAdapter::repairAttempt(int repairChance) {
	return (static_cast<WearableObject*>(stub))->repairAttempt(repairChance);
}

/*
 *	WearableObjectHelper
 */

WearableObjectHelper* WearableObjectHelper::staticInitializer = WearableObjectHelper::instance();

WearableObjectHelper::WearableObjectHelper() {
	className = "WearableObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void WearableObjectHelper::finalizeHelper() {
	WearableObjectHelper::finalize();
}

DistributedObject* WearableObjectHelper::instantiateObject() {
	return new WearableObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* WearableObjectHelper::instantiateServant() {
	return new WearableObjectImplementation();
}

DistributedObjectAdapter* WearableObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WearableObjectAdapter(static_cast<WearableObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

