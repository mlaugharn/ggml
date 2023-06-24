//
// Created by Marc on 6/24/2023.
//

#ifndef BBAGI_STARCODER_H
#define BBAGI_STARCODER_H
#include "../common.h"
#include "../common-ggml.h"
void starcoder_call(gpt_params& params, const std::string& prompt, std::string& output, int& result, bool verbose=false, bool print_response=true);

#endif //BBAGI_STARCODER_H