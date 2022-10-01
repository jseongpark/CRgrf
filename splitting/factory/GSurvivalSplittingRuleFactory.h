/*-------------------------------------------------------------------------------
  This file is part of generalized random forest (grf).

  grf is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  grf is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with grf. If not, see <http://www.gnu.org/licenses/>.
 #-------------------------------------------------------------------------------*/

#ifndef GRF_GSURVIVALSPLITTINGRULEFACTORY_H
#define GRF_GSURVIVALSPLITTINGRULEFACTORY_H


#include "SplittingRuleFactory.h"

namespace grf {

    /**
     * A factory that produces standard surivival (logrank) splitting rules.
     */
    class GSurvivalSplittingRuleFactory final : public SplittingRuleFactory {
    public:
        GSurvivalSplittingRuleFactory() = default;

        std::unique_ptr<SplittingRule> create(size_t max_num_unique_values,
            const TreeOptions& options) const;
    private:
        DISALLOW_COPY_AND_ASSIGN(GSurvivalSplittingRuleFactory);
    };

} // namespace grf

#endif //GRF_GSURVIVALSPLITTINGRULEFACTORY_H
