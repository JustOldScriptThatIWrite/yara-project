/*
Copyright (c) 2007. Victor M. Alvarez [plusvic@gmail.com].

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _SIZEDSTR_H
#define _SIZEDSTR_H

//
// This struct is used to support strings containing null chars. The length of 
// the string is stored along the string data. However the string data is also
// terminated with a null char.
//

typedef struct _SIZED_STRING
{
    int length;
    char c_string[1];  

} SIZED_STRING;

#endif

