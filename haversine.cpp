// Haversine forumla for use of finding distances between
// two locaitons in swift.
// NOTE Latitude and Longitude must both be in radians


let dLat = lat2 - lat1
let dLong = long2 - long1

let a = ((sin((dLat)/2)) * (sin((dLat)/2))) + (cos(lat1)*cos(lat2)*((sin((dLong)/2)) * (sin((dLong)/2))))
let b = sqrt(a)
let d = (2*R) * (asin(b)) // Haversine formula
