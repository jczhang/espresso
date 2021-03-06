#include "LayerFactory.h"

#include "layer.h"
#include "layers_vision.h"
#include "layers_activation.h"
#include "layers_common.h"
#include "layers_loss.h"

#include "proto/caffe.pb.h"

namespace Espresso {

REGISTER_LAYER_CLASS(Convolution);

} // namespace Espresso
