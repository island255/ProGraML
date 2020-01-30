// This file defines a function for converting program graphs to graphviz.
//
// Copyright 2019-2020 the ProGraML authors.
//
// Contact Chris Cummins <chrisc.101@gmail.com>.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#pragma once

#include "boost/graph/graphviz.hpp"
#include "deeplearning/ml4pl/graphs/programl.pb.h"

namespace ml4pl {

// Serialize the given program graph to an output stream.
void SerializeGraphVizToString(const ProgramGraph& graph,
                               std::ostream* ostream);

}  // namespace ml4pl
