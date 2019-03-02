/**
 * @file arena_mobile_entity_factory.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef SRC_ARENA_MOBILE_ENTITY_FACTORY_H_
#define SRC_ARENA_MOBILE_ENTITY_FACTORY_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <string>
#include "src/arena_entity_factory.h"
#include "src/arena_mobile_entity.h"
#include "src/entity_type.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief ArenaMobileEntity factory that creates any type of ArenaMobileEntity objects
 */
class ArenaMobileEntityFactory : public ArenaEntityFactory {
public:
/**
 * @brief default constructor for ArenaMobileEntityFactory
 */
  ArenaMobileEntityFactory();

/**
 * @brief destructor for ArenaMobileEntityFactory
 */
 ~ArenaMobileEntityFactory();

/**
 * @brief create method inherited from arena_entity_factory that creates ArenaMobileEntity objects of given type
 */
  ArenaMobileEntity* create(EntityType type);
};

NAMESPACE_END(csci3081);

#endif /* SRC_ARENA_MOBILE_ENTITY_FACTORY_H_ */
