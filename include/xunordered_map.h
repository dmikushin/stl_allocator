#ifndef _XUNORDERED_MAP_H
#define _XUNORDERED_MAP_H

#include "stl_allocator.h"
#include <unordered_map>

template<class _Kty,
	class _Ty,
	class _Hash = std::hash<_Kty>,
	class _Pred = std::equal_to<_Kty>,
	class _Alloc = stl_allocator<std::pair<const _Kty, _Ty> > >
	class xunordered_map
		: public std::unordered_map<_Kty, _Ty, _Hash, _Pred, _Alloc>
	{
	};

template<class _Kty,
	class _Ty,
	class _Hash = std::hash<_Kty>,
	class _Pred = std::equal_to<_Kty>,
	class _Alloc = stl_allocator<std::pair<const _Kty, _Ty> > >
	class xunordered_multimap
		: public std::unordered_multimap<_Kty, _Ty, _Hash, _Pred, _Alloc>
	{
	};

#endif
