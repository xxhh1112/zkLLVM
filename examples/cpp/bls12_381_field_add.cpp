#include <nil/crypto3/algebra/fields/bls12/base_field.hpp>

using namespace nil::crypto3::algebra::fields;

[[circuit]] typename bls12_base_field<381>::value_type add(
    typename bls12_base_field<381>::value_type a,
    typename bls12_base_field<381>::value_type b) {

    return a + b;
}




// [[circuit]] typename ed25519::template g1_type<nil::crypto3::algebra::curves::coordinates::affine>::value_type curve_mul(
//         typename ed25519::template g1_type<nil::crypto3::algebra::curves::coordinates::affine>::value_type point,
//         typename ed25519::scalar_field_type::value_type scalar) {

//     return point * scalar;
// }