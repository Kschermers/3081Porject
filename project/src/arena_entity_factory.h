/**
 * @file arena_entity_factory.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef SRC_ARENA_ENTITY_FACTORY_H_
#define SRC_ARENA_ENTITY_FACTORY_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <string>
#include "src/arena_entity.h"
#include "src/entity_type.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
 /**
* @brief ArenaEntityFactory interface that AEMobile and AEImmobile inherit from
*/
class ArenaEntityFactory {
public:

/**
 * @brief destructor
 */
  virtual ~ArenaEntityFactory();

/**
 * @brief create an ArenaEntity of given type
 */
  virtual ArenaEntity* create(EntityType type) = 0;
};

NAMESPACE_END(csci3081);

#endif /* SRC_ARENA_ENTITY_FACTORY_H_ */
