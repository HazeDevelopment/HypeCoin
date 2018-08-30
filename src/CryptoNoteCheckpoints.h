// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.
#pragma once
#include <cstddef>
#include <initializer_list>
namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};
const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{     0, "9bfe64f67680f35e7421831b8221f440c173da1d1a87405ef3407e92995ee680"},
{  5000, "e32fe4b4228dff7b5f14a29cb274ca144fd3cf32e73958238dd4e3b1e77da686"},
{ 10000, "8d482e9f14b8cd9234541f91f53cc83fcf92839ae4a62c89006e3d14837aa6fa"},
{ 15000, "bae18b3655c2488e810155f63eac662952cf74db53a1555fd0c298c779ad2885"},
{ 20000, "0ea7967efa80b4c8acdd1cdd23b7e4008be9f2397832fdf198e7ec00337d46dc"},
{ 25000, "62eba44137e7fd57838aaeb26b828dc47ebc828c9c17005f68e572be183a1cd7"},
{ 30000, "33ac94dd4b865d767a5af1dea994b8075821e66feaa307c3eb0a32ef5f7d3b81"},
{ 35000, "ea6c5d1ac4ad35f20daea7b35b3448a610dd58c8f9a54b1827cfea74cccbe7ad"},
{ 40000, "c636e921a5d9a0f4e3a4cc7d82c5aa10feea3e65a1d5fc06fe851e0cb55b7585"},
{ 45000, "a5d779c46b02429f70a32ea155fe04cfc82ee96653af1da17705688236244133"},
{ 50000, "96e97ae185f39b1e562fcb9ddc6daced3e561003a934144d997f897a11f54a8a"},
{ 55000, "7bca14243a32a2e08b9345395be4bc8cc9ca8bfe1e0e2562860993cd575369b4"},
{ 60000, "1f89dabce3ccf36fa68d2b82ca265977882a233d1c892790053a091a61a8f3ef"},
{ 65000, "afcf09794ab92705f19bfa99f24c4188cce4bec838c580f25fd7ec360ac6f551"},
{ 70000, "3c4710634fcf451d24debbba1e7d0c71bfddfb051055df9cc1cac8d79bad11f6"},
{ 75000, "7e16600ed33be6d608a5f5a372e8fcacd223eab511a89fea4345cd269442b674"},
{ 80000, "882f99a5bc13d0acfe810f87ccfce12ae26ed2aefd46c725a48ce37722900414"},
{ 85000, "6e347550b541f76bdc22aa81d70c9e3c0c1d43c9b32065cd470a9e5653e16442"},
{ 90000, "a0eea21a9db1c5a6ee615240f5f9d30fa0138a9c4d43f7824ac33b187393ad4c"},
{ 95000, "de2ecf17053d3ab50c9310c9e0c6ba405ee863d20755cf54e0afcdf17881f0ad"},
{100000, "a95ef01d658184723cba6c4cd6cc51e2d36de9c0cdb1bd887289a5554a58f660"},
{105000, "011658ab5b3b18225beede30ead11dc190b608a9a8c8093fd8f33bdf4be0e782"},
{110000, "dd9be2453f7db1e1364f43d732238bbf08acc1c80189781d01906edae97cd41b"},
{115000, "bee61465a8854e9a39eaed1edde0bfa3ec563909a08aa0f63b4c68074c274001"},
{120000, "d2e5f1365001e93a27cf5e8791bee8cc4e3a7832423c175e3fda8493d31a3b19"},
{125000, "c0db3beab4a1a7f1d2c59504bee54e7c42addeb311291957f65048d2762f68d0"},
{130000, "bdd063007c2801f940e8a6da9bf46fd52c68e40c7cb37cb70eedd9980bdddd5c"},
{135000, "2c9829107506e72a09a48f8ad7f414930ae3d162802154be09e056d5f36f1223"},
{140000, "9a4794c554e6ba2f142ffdbb0dfee167386b2d7540d5d70d46fb9acc9b17ab27"},
{145000, "f14834e8130f40f48832bb32948d76caf98c48d7e02be0740a15d9ff85fcf671"},
{150000, "166823891f135ef9310bd8551fde7f66d74628ec6b7ae4d0ce9c36293c829eef"},
{155000, "03727121cdfa68c89ef7b7d20f4ba8634af7cb8b041aa53910f3b9040d7cfa11"},
{160000, "1c3f9a171e9b82dee5e18eb63a3939f0c0b52b1fdd8ae5d6e005f6db0f5f1db6"},
{165000, "9dd3e2eec96441dc516c1d147d744d9af3e5f7cb0fca645de3adbab3f6f5fcbf"},
{170000, "80e2bbda9313acfe4a346aa7f13fe30c4a4424810c8db1d03cab6cc8d3945102"},
{175000, "b0e91765fa01c9aea371d86decf4ec41b3765cc5991b900305e0012ae46767fe"},
{180000, "7bd0810c80e2e20608c22166bc6794e08f4a9c30a4975fe72d885807f172af81"}
};
}