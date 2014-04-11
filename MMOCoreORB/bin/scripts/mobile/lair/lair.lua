Lair = {
	mobiles = {}, -- mobile, level?
	bossMobiles = {}, -- mobile template, number to spawn
	
	spawnLimit = 0,
	
	buildingsVeryEasy = {},
	buildingsEasy = {},
	buildingsMedium = {},
	buildingsHard = {},
	buildingsVeryHard = {},

	faction = "neutral",
	mobType = "creature"
}

function Lair:new (o)
	o = o or { }
	setmetatable(o, self)
    self.__index = self
    return o
end
