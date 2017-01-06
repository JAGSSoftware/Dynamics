/*
 * Copyright (c) 2016 José Alberto García Sánchez
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * \file
 * \brief Global definition of constants.
 *
 * Definition of constants.
 * \copyright (c) 2016 José Alberto García Sánchez
 */

/**
 * \defgroup constants Constants
 * \brief Mathematical and Physical constants
 *
 * This is a collection of useful mathematical and physical constants
 * used in the code.
 */
#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

#include <math.h>
/**
 * \addtogroup constants
 * \{
 */

/**
 * \defgroup physical_constants Physical constants
 * \brief Collection of physical constants.
 */

/**
 * \defgroup math_constants Mathematical constants
 */

/**
 * \}
 */

/** \brief Speed of light in vacuum in m/s
 * \ingroup physical_constants
 */
#define SPEED_OF_LIGHT_VACUUM 299792458
/**
 * \addtogroup physical_constants
 * \{
 */
/**
 * \brief Planck's constant
 *
 * This is the Planck's Constant for Quantum Mechanics
 */
#define PLANCK_CONSTANT 6.62607004e-34
#define BOLTZMANN_CONSTANT 1.3806505e-23  //!< Boltzmann constant in J/K

/**
 * \}
 */

/** \ingroup physical_constants */
#define AVOGADRO_NUMBER 6.02214199e23   //!< Avogadro's number

/**
 * \defgroup math_constants Mathematical constants
 * \brief Collection of mathematical constants.
 */

/**
 * \brief
 * \ingroup math_constants
 */
#define FEIGENBAUM 4.6692016091

/**
 * \brief Definition of \f$ \pi \f$ in \code math.h \endcode
 * \ingroup math_constants
 * \see M_PI defined in math.h
 */
const double PI = M_PI; //!< redefintion of pi.

/*
 * \}
 */

/**
 * \addtogroup macros Macros
 * \{
 */
/**
 * \brief Returns the max value from the two passed values.
 *
 * Return the maximum value of the two passed values as arguments.
 * \param[in] x first value
 * \param[in] y second value
 * \return maximum value among the two passed arguments
 */
#define MAX(x, y) ((x) > (y) ? (x) : (y))

/** \} */
#endif
