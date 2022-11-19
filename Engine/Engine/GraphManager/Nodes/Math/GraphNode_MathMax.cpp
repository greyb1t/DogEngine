#include "pch.h"
#include "GraphNode_MathMax.h"
#include "Engine/GraphManager/Nodes/Base/GraphNodeInstance.h"

GraphNode_MathMax::GraphNode_MathMax()
{
	CreatePin("X", PinDirection::PinDirection_IN, DataType::Float);
	CreatePin("Y", PinDirection::PinDirection_IN, DataType::Float);
	CreatePin("Result", PinDirection::PinDirection_OUT, DataType::Float);
}

int GraphNode_MathMax::OnExec(class GraphNodeInstance* aNodeInstance)
{
	//const float input1 = GetPinData<float>(aNodeInstance, 0);
	//const float input2 = GetPinData<float>(aNodeInstance, 1);

	//const float result = std::max(input1, input2);

	//// Set the result we calculated to the data property on the Result pin.
	//SetPinData(aNodeInstance, 2, result);

	return -1; // If the node doesn't have a flow, return -1 see the print node for reference
}
