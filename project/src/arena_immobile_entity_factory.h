/**
 * @file arena_immobile_entity_factory.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef SRC_ARENA_IMMOBILE_ENTITY_FACTORY_H_
#define SRC_ARENA_IMMOBILE_ENTITY_FACTORY_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <string>
#include "src/arena_entity_factory.h"
#include "src/arena_immobile_entity.h"
#include "src/entity_type.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief ArenaImmobileEntity factory that creates any type of ArenaImmobileEntity objects
 */
class ArenaImmobileEntityFactory : public ArenaEntityFactory {
public:
/**
 * @brief default constructor for ArenaMobileEntityFactory
 */
  ArenaImmobileEntityFactory();

/**
 * @brief destructor for ArenaMobileEntityFactory
 */
  ~ArenaImmobileEntityFactory();

/**
 * @brief create method inherited from arena_entity_factory that creates ArenaImmobileEntity objects of given type
 */
  ArenaImmobileEntity* create(EntityType type);
};

NAMESPACE_END(csci3081);

#endif /* SRC_ARENA_IMMOBILE_ENTITY_FACTORY_H_ */
