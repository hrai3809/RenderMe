#include "../calculator_graph_util.h"

DEFINE_LOAD_GRAPH("../../mediapipe/graphs/selfie_segmentation/selfie_segmentation_cpu.pbtxt")

namespace mediapipe {
	DEFINE_SUBGRAPH(SelfieSegmentationCpu, "../../mediapipe/modules/selfie_segmentation/selfie_segmentation_cpu.pbtxt");
	DEFINE_SUBGRAPH(SelfieSegmentationModelLoader, "../../mediapipe/modules/selfie_segmentation/selfie_segmentation_model_loader.pbtxt");
}
#include "../demo_run_graph_main.cc"
