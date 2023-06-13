#pragma once

#include "ConsoleMath.h"
#include "Part.h"
#include "Head.h"
#include "ConsoleObject.h"
#include "ConsoleEngineCore.h"
#include <list>

// Ό³Έν :
class Body : public Part
{
public:
	// constrcuter destructer
	Body();
	~Body();

	// delete Function
	Body(const Body& _Other) = delete;
	Body(Body&& _Other) noexcept = delete;
	Body& operator=(const Body& _Other) = delete;
	Body& operator=(Body&& _Other) noexcept = delete;

	//int randomPos();
	//int randomPos2();
	int4 RandomPosition();


protected:

private:

};

