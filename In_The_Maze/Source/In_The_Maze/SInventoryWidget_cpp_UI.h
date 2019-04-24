// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class IN_THE_MAZE_API SInventoryWidget_cpp_UI : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SInventoryWidget_cpp_UI)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
};
