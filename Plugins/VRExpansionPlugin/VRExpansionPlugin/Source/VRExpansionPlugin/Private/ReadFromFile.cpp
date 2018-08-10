// Fill out your copyright notice in the Description page of Project Settings.

#include "ReadFromFile.h"
#include "Paths.h"
#include "FileHelper.h"

bool UReadFromFile::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool UReadFromFile::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}

