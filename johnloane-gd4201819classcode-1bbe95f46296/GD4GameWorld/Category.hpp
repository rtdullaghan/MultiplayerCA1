#pragma once
//Entity/Scene node category, used to dispatch messages

enum class Category {
	None = 0,
	SceneAirLayer = 1 << 0,
	PlayerAircraft = 1 << 1,
	AlliedAircraft = 1 << 2,
	EnemyAircraft = 1 << 3,
	Pickup = 1 << 4,
	AlliedProjectile = 1 << 5,
	EnemyProjectile = 1 << 6,
	ParticleSystem = 1 << 7,
	SoundEffect = 1 << 8,


	Aircraft = PlayerAircraft | AlliedAircraft | EnemyAircraft,
	Projectile = AlliedProjectile | EnemyProjectile
};