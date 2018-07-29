# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule OpenAPIPetstore.Model.Capitalization do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"smallCamel",
    :"CapitalCamel",
    :"small_Snake",
    :"Capital_Snake",
    :"SCA_ETH_Flow_Points",
    :"ATT_NAME"
  ]

  @type t :: %__MODULE__{
    :"smallCamel" => String.t,
    :"CapitalCamel" => String.t,
    :"small_Snake" => String.t,
    :"Capital_Snake" => String.t,
    :"SCA_ETH_Flow_Points" => String.t,
    :"ATT_NAME" => String.t
  }
end

defimpl Poison.Decoder, for: OpenAPIPetstore.Model.Capitalization do
  def decode(value, _options) do
    value
  end
end

