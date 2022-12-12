/*
 *  cutility Source Library
 *
 *  Created on: 12/12/2020
 *
 *  Author: Coskun ERGAN
 */
#ifndef CUTILITY_H
#define CUTILITY_H

#include <cstddef>

/*********************************************************/
/*********************************************************/
/*********************************************************/
// aSize makrosu değişkenlerin storage usage bilgisini döndürür.
template <typename T, std::size_t size>
constexpr std::size_t asize(const T(&)[size])
{
    return size;
}
/*********************************************************/
// incomplate tür olduğu için bu tür kullanıldığında hata verir ancak type bilgisi öğrenilir 
template <typename T>
class TypeTeller; 
/*********************************************************/
/*********************************************************/
/*********************************************************/
#endif
