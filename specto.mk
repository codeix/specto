##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=specto
ConfigurationName      :=Debug
WorkspacePath          := "/home/sriolo/.codelite/riols"
ProjectPath            := "/home/sriolo/development/cpp/specto"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Samuel Riolo
Date                   :=05/21/15
CodeLitePath           :="/home/sriolo/.codelite"
LinkerName             :=/usr/bin/g++ 
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="specto.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)expat 
ArLibs                 :=  "expat" 
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++ 
CC       := /usr/bin/gcc 
CXXFLAGS := -std=c++11 -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as 


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/Vertex.cpp$(ObjectSuffix) $(IntermediateDirectory)/Camera.cpp$(ObjectSuffix) $(IntermediateDirectory)/World.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/xmlreader.cpp$(ObjectSuffix) $(IntermediateDirectory)/Face.cpp$(ObjectSuffix) $(IntermediateDirectory)/Color.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Vertex.cpp$(ObjectSuffix): Vertex.cpp $(IntermediateDirectory)/Vertex.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/sriolo/development/cpp/specto/Vertex.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Vertex.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Vertex.cpp$(DependSuffix): Vertex.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Vertex.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Vertex.cpp$(DependSuffix) -MM "Vertex.cpp"

$(IntermediateDirectory)/Vertex.cpp$(PreprocessSuffix): Vertex.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Vertex.cpp$(PreprocessSuffix) "Vertex.cpp"

$(IntermediateDirectory)/Camera.cpp$(ObjectSuffix): Camera.cpp $(IntermediateDirectory)/Camera.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/sriolo/development/cpp/specto/Camera.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Camera.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Camera.cpp$(DependSuffix): Camera.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Camera.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Camera.cpp$(DependSuffix) -MM "Camera.cpp"

$(IntermediateDirectory)/Camera.cpp$(PreprocessSuffix): Camera.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Camera.cpp$(PreprocessSuffix) "Camera.cpp"

$(IntermediateDirectory)/World.cpp$(ObjectSuffix): World.cpp $(IntermediateDirectory)/World.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/sriolo/development/cpp/specto/World.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/World.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/World.cpp$(DependSuffix): World.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/World.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/World.cpp$(DependSuffix) -MM "World.cpp"

$(IntermediateDirectory)/World.cpp$(PreprocessSuffix): World.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/World.cpp$(PreprocessSuffix) "World.cpp"

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/sriolo/development/cpp/specto/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/xmlreader.cpp$(ObjectSuffix): xmlreader.cpp $(IntermediateDirectory)/xmlreader.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/sriolo/development/cpp/specto/xmlreader.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/xmlreader.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/xmlreader.cpp$(DependSuffix): xmlreader.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/xmlreader.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/xmlreader.cpp$(DependSuffix) -MM "xmlreader.cpp"

$(IntermediateDirectory)/xmlreader.cpp$(PreprocessSuffix): xmlreader.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/xmlreader.cpp$(PreprocessSuffix) "xmlreader.cpp"

$(IntermediateDirectory)/Face.cpp$(ObjectSuffix): Face.cpp $(IntermediateDirectory)/Face.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/sriolo/development/cpp/specto/Face.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Face.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Face.cpp$(DependSuffix): Face.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Face.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Face.cpp$(DependSuffix) -MM "Face.cpp"

$(IntermediateDirectory)/Face.cpp$(PreprocessSuffix): Face.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Face.cpp$(PreprocessSuffix) "Face.cpp"

$(IntermediateDirectory)/Color.cpp$(ObjectSuffix): Color.cpp $(IntermediateDirectory)/Color.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/sriolo/development/cpp/specto/Color.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Color.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Color.cpp$(DependSuffix): Color.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Color.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Color.cpp$(DependSuffix) -MM "Color.cpp"

$(IntermediateDirectory)/Color.cpp$(PreprocessSuffix): Color.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Color.cpp$(PreprocessSuffix) "Color.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


