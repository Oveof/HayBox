#ifndef _MODES_EXTRA_CELESTE_HPP
#define _MODES_EXTRA_CELESTE_HPP

#include "core/KeyboardMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

class Celeste : public KeyboardMode {
  public:
    Celeste(socd::SocdType socd_type);

  private:
    void UpdateKeys(InputState &inputs);
};

#endif
