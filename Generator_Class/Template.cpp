#include "Template.hpp"

// COPLIEN =====================================================================

/**
 * @brief Constructor:
 * The "Template".
 */
Template::Template() {}

/**
 * @brief Copy:
 * Copy the "Template".
 * 
 * @param copy the "Template" to copy.
 */
Template::Template(const Template& copy) { (void)copy; }

/**
 * @brief Destructor:
 * Called when the object "Template" is delete
 */
Template::~Template() {}

Template & Template::operator=(const Template& op)
{
	if (this == &op)
		return (*this); 
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================

/**
 * @brief Get plop of the "Template".
 * 
 * @return the plop of the "Template".
 */

// =============================================================================

// ADDITIONNAL =================================================================
// =============================================================================

// EXCEPTIONS ==================================================================
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================